#include "PCGPolygonContent.h"
#include "PCGGraph.h"
#include "TimerManager.h"
#include "Data/PCGPointData.h"
#include "CesiumGeoreference.h"
#undef OPAQUE
#include "Cesium3DTileset.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SplineComponent.h"
#include <PCGManager.h>



int32 APCGPolygonContent::TotalPCGGraphsPoints = 0;
int32 APCGPolygonContent::ExpectedPolygonGraphs = 0;
int32 APCGPolygonContent::CompletedPolygonGraphs = 0;
FDateTime APCGPolygonContent::GraphGenerationStartTime = FDateTime::UtcNow();



// testing:

int32 APCGPolygonContent::TotalProcessedPoints=0;
int32 APCGPolygonContent::TotalSkippedPoints = 0;

void APCGPolygonContent::Tick(float DeltaTime) {

    Super::Tick(DeltaTime);

}

APCGPolygonContent::APCGPolygonContent()
{
    PrimaryActorTick.bCanEverTick = true;
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


void APCGPolygonContent::BeginPlay() {

    Super::BeginPlay();
  

}

void APCGPolygonContent::UpdatePCG() {


    if (!Pawn) return;

    FVector Location = Pawn->GetActorLocation();

    float ActivationDistance = 8000.0f;
    float DeactivationDistance = 10000.0f;


    for (APCGPolygonActor* Actor : SpawnedPolygonActors) {

        if (!IsValid(Actor)) return;

        float Distance = FVector::Distance(Actor->GetActorLocation(), Location);

        bool shouldActive = Distance < ActivationDistance;

        bool shouldDeactive = Distance > DeactivationDistance;

        if (shouldActive) {
        Actor->ActivatePCG();
        }
        else if (!shouldActive && Actor->isActive) {
            Actor->DeActivatePCG();
        }
    }
}


void APCGPolygonContent::InitializeContent()
{

    CesiumGeoreference = ACesiumGeoreference::GetDefaultGeoreference(GetWorld());
    Tileset = Cast<ACesium3DTileset>(UGameplayStatics::GetActorOfClass(GetWorld(), ACesium3DTileset::StaticClass()));


}


void APCGPolygonContent::InitializePCGPolygonData(const FShapeRawData& Raw)
{
    InitializeContent();

    for (int32 i = 0; i < Raw.Attributes.Num(); ++i)
    {
        const auto& A = Raw.Attributes[i];
        FGrassPolygonData temp;


        auto GetSafeString = [&](const FString& key) ->FString {
            return A.Contains(key) ? A[key] : TEXT("");
            };


        auto GetSafeInt = [&](const FString& key) -> int32 {
            return A.Contains(key) ? FCString::Atoi(*A[key]) : 0;

            };


        auto GetSafeFloat = [&](const FString& key) -> float {
            return A.Contains(key) ? FCString::Atof(*A[key]) : 0.0f;

            };


        //temp.Id = FCString::Atoi(*A["id"]);
        //temp.Name = A["Name"];
        //temp.Density = FCString::Atof(*A["Density"]);
        //temp.Type = A["Type"];
        //temp.Model = A["Model"];
        //temp.KindID = FCString::Atoi(*A["KindID"]);
        //temp.KindDesc = A["KindDesc"];
        //temp.DomainID = FCString::Atoi(*A["DomainID"]);
        //temp.DomainDesc = A["DomainDesc"];
        //temp.CountryID = FCString::Atoi(*A["CountryID"]);
        //temp.CountryDes = A["CountryDes"];
        //temp.CategoryID = FCString::Atoi(*A["CategoryID"]);
        //temp.CategoryDe = A["CategoryDe"];
        //temp.SubCategID = FCString::Atoi(*A["SubCategID"]);
        //temp.SubCategDe = A["SubCategDe"];
        //temp.SpecificID = FCString::Atoi(*A["SpecificID"]);
        //temp.SpecificDe = A["SpecificDe"];
        //temp.EntityEnum = A["EntityEnum"];
        //temp.Scale = FCString::Atoi(*A["Scale"]);
        //temp.Foliage = A["Foliage"];
        //temp.State = A["State"];
        //temp.PolygonPoints = Raw.Geometries[i];
        //temp.FileName = Raw.CollectionName;


        temp.Id = GetSafeInt("id");
        temp.Name = A["Name"];
        temp.Type = GetSafeString("Type");
        temp.Density = GetSafeFloat("Density");
        temp.Scale = GetSafeFloat("Scale");
        temp.Model = GetSafeString("Model");
        temp.FileName = Raw.CollectionName;
        temp.State = GetSafeString("State");
        temp.KindID = GetSafeInt("KindID");
        temp.KindDesc = GetSafeString("KindDesc");
        temp.DomainID = GetSafeInt("DomainID");
        temp.DomainDesc = GetSafeString("DomainDesc");
        temp.CountryID = GetSafeInt("CountryID");
        temp.CountryDes = GetSafeString("CountryDes");
        temp.CategoryID = GetSafeInt("Alpha");
        temp.CategoryDe = GetSafeString("CategoryDe");
        temp.SubCategID = GetSafeInt("SubCategID");
        temp.SubCategDe = GetSafeString("SubCategDe");
        temp.SpecificID = GetSafeInt("SpecificID");
        temp.SpecificDe = GetSafeString("SpecificDe");
        temp.Foliage = GetSafeString("Foliage");
        temp.EntityEnum = A.Contains("EntityEnum") ? A["EntityEnum"] : TEXT("");
        temp.PolygonPoints = Raw.Geometries[i];
        temp.Area = GetSafeFloat("Area");




        PolygonDataList.Add(temp);
    }
}

void APCGPolygonContent::SpawnPCGPolygonData()
{
    if (PolygonDataList.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No PCG polygon data available to spawn."));
        return;
    }


    GraphGenerationStartTime = FDateTime::UtcNow();
    ExpectedPolygonGraphs += PolygonDataList.Num();

    FString BaseName = PolygonDataList[0].FileName;
    FName ActorName(BaseName);

    int Suffix = 0;

    while (FindObject<AActor>(nullptr, *ActorName.ToString())) {
        ++Suffix;
        ActorName = FName(*FString::Printf(TEXT("%s_%d"), *BaseName, Suffix));
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.Name = ActorName;


    ParentActor = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

    if (ParentActor)
    {

        USceneComponent* SceneRoot = NewObject<USceneComponent>(ParentActor);
        SceneRoot->SetMobility(EComponentMobility::Static);
        SceneRoot->RegisterComponent();
        ParentActor->SetRootComponent(SceneRoot);

#if WITH_EDITOR
        ParentActor->SetActorLabel(TEXT("PCG Polygon Parent"));
#endif
    }

    for (const FGrassPolygonData& Data : PolygonDataList)
    {
        SpawnIndividualPCGPolygonData(Data);
    }

}


void APCGPolygonContent::AssignPCGGraph(UPCGComponent* TargetPCG, const FString& GraphName)
{
    const FString GraphFolderPath = TEXT("/Game/PCGData/PolygonDataAssets");
    FString AssetName = FString::Printf(TEXT("PolygonData_%s"), *GraphName);
    FString AssetPath = FString::Printf(TEXT("%s/%s.%s"), *GraphFolderPath, *AssetName, *AssetName);

    UPCGGraph* Graph = Cast<UPCGGraph>(StaticLoadObject(UPCGGraph::StaticClass(), nullptr, *AssetPath));
    if (!Graph)
    {
        AssetPath = TEXT("/Game/PCGData/PolygonDataAssets/PolygonData_default.PolygonData_default");
        Graph = Cast<UPCGGraph>(StaticLoadObject(UPCGGraph::StaticClass(), nullptr, *AssetPath));
    }

    if (Graph)
    {
        TargetPCG->SetGraph(Graph);
        UE_LOG(LogTemp, Log, TEXT("Assigned PCG Graph: %s"), *GraphName);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load PCG Graph: %s"), *GraphName);
    }
}


void APCGPolygonContent::SpawnIndividualPCGPolygonData(const FGrassPolygonData& Data)
{
    if (!Tileset || !CesiumGeoreference)
    {
        UE_LOG(LogTemp, Error, TEXT("Missing Cesium references."));
        return;
    }

    const TArray<FVector>& Points = Data.PolygonPoints;
    if (Points.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No points found in polygon data."));
        return;
    }

    FCesiumSampleHeightMostDetailedCallback Callback;
    Callback.BindLambda([this, Points, Data](ACesium3DTileset* InTileset, const TArray<FCesiumSampleHeightResult>& SampledResults, const TArray<FString>& Warnings)
        {
            if (SampledResults.Num() != Points.Num())
            {
                UE_LOG(LogTemp, Error, TEXT("Sampled results do not match polygon point count."));
                return;
            }

            TArray<FVector> AdjustedPoints;
            for (int32 i = 0; i < SampledResults.Num(); ++i)
            {
                FVector UnrealPos = SampledResults[i].SampleSuccess
                    ? CesiumGeoreference->TransformLongitudeLatitudeHeightPositionToUnreal(SampledResults[i].LongitudeLatitudeHeight)
                    : Points[i];

                AdjustedPoints.Add(UnrealPos);
            }

            // Filter out duplicate points
            TArray<FVector> UniquePoints;
            for (const FVector& Pt : AdjustedPoints)
            {
                if (!UniquePoints.ContainsByPredicate([&](const FVector& Other)
                    { return FVector::DistSquared(Other, Pt) < KINDA_SMALL_NUMBER; }))
                {
                    UniquePoints.Add(Pt);
                }
            }

            if (UniquePoints.Num() < 3)
            {
                UE_LOG(LogTemp, Warning, TEXT("Polygon has fewer than 3 unique points, skipping."));
                return;
            }

            // Spawn APCGPolygonActor
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Name = FName(FString::Printf(TEXT("PCG Polygon Actor (%s) %d"), *Data.Name, Data.Id));
            APCGPolygonActor* PolygonActor = GetWorld()->SpawnActor<APCGPolygonActor>(
                APCGPolygonActor::StaticClass(),
                UniquePoints[0],
                FRotator::ZeroRotator,
                SpawnParams);

            if (!PolygonActor)
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to spawn APCGPolygonActor."));
                return;
            }

#if WITH_EDITOR
            PolygonActor->SetActorLabel(FString::Printf(TEXT("PCG Polygon Actor (%s) %d"), *Data.Name, Data.Id));
#endif

            PolygonActor->InteriorSampleSpacing = Data.Density * 100.0f;
            PolygonActor->InteriorBorderSpacing =  100.0f;

       
            USplineComponent* Spline = PolygonActor->SplineComponent;
            Spline->ClearSplinePoints();



            FVector Origin = UniquePoints[0];
            for (int32 i = 0; i < UniquePoints.Num(); ++i)
            {
                FVector LocalPoint = UniquePoints[i] - Origin;
                Spline->AddSplinePoint(LocalPoint, ESplineCoordinateSpace::Local);
                Spline->SetTangentAtSplinePoint(i, FVector::ZeroVector, ESplineCoordinateSpace::Local);
            }
           //  UE_LOG(LogTemp, Log, TEXT("Total Spline(%d) Points : %d"), Data.Id, Spline->GetNumberOfSplinePoints());



            Spline->SetClosedLoop(true);
            Spline->UpdateSpline();


            if (IsValid(ParentActor) && IsValid(ParentActor->GetRootComponent()))
            {
                PolygonActor->AttachToComponent(ParentActor->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
            }

       
            UPCGComponent* PCG = PolygonActor->PCGComponent;

            PCG->SetComponentTickEnabled(false);

            
         
            PCG->bRuntimeGenerated = true;
            PCG->bActivated = true;
      


            FString GraphName = Data.Model.Replace(TEXT(" "), TEXT("")).ToLower();
            AssignPCGGraph(PCG, GraphName);
        
            PCG->OnPCGGraphGeneratedExternal.AddDynamic(this, &APCGPolygonContent::OnPCGGraphGenerated);
       

            PCG->CleanupLocal(true, true);
            PCG->GenerateLocal(true);

            PolygonActor->isActive = false;
            SpawnedPolygonActors.Add(PolygonActor);

        });

    Tileset->SampleHeightMostDetailed(Points, Callback);
}


void APCGPolygonContent::OnPCGGraphGenerated(UPCGComponent* PCGComponent)
{

    int32 currentGraphPoints = 0;

    const FPCGDataCollection& Output = PCGComponent->GetGeneratedGraphOutput();

    for (const FPCGTaggedData& TaggedData : Output.GetInputs()) {

        if (const UPCGPointData* PointData = Cast<UPCGPointData>(TaggedData.Data)) {
            currentGraphPoints += PointData->GetPoints().Num();

        }
    }

    TotalPCGGraphsPoints += currentGraphPoints;
    CompletedPolygonGraphs++;

    if (CompletedPolygonGraphs == ExpectedPolygonGraphs) {
        FTimespan Elapsed = FDateTime::UtcNow() - GraphGenerationStartTime;

        GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, FString::Printf(TEXT("Total Polygon Data Points: %d"), TotalPCGGraphsPoints));
        GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("Total Time(s) Polygon Data: %f"), Elapsed.GetTotalSeconds()));


        UE_LOG(LogTemp, Log, TEXT("All %d PCG graphs completed."), ExpectedPolygonGraphs);
        UE_LOG(LogTemp, Log, TEXT("Total PCG Points accross all polygon: %d"), TotalPCGGraphsPoints);
        UE_LOG(LogTemp, Log, TEXT("Total Execution Time(Polygon Data): %.2f"), Elapsed.GetTotalSeconds());
        UE_LOG(LogTemp, Log, TEXT("Total Processed Points: %d"), TotalProcessedPoints);
        UE_LOG(LogTemp, Log, TEXT("Total Skippped Points: %d"), TotalSkippedPoints);

        TotalPCGGraphsPoints = 0;
        ExpectedPolygonGraphs = 0;
        CompletedPolygonGraphs = 0;
        GraphGenerationStartTime = FDateTime::MinValue();
        TotalProcessedPoints = 0;
        TotalSkippedPoints = 0;

    }

}




// PCG R&D:


          //  UBoxComponent* BoxCollision = PolygonActor->BoxCollision;


/* FVector Max(-FLT_MAX, -FLT_MAX, -FLT_MAX);
FVector Min(FLT_MAX, FLT_MAX, FLT_MAX);

for (int32 i = 0; i < Spline->GetNumberOfSplinePoints(); i++) {
    const FVector location = Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World);

    Min = Min.ComponentMin(location);
    Max = Max.ComponentMax(location);
}

FVector Center = (Max + Min) * 0.5f;
FVector Extents = (Max - Min) * 0.5f;

BoxCollision->SetBoxExtent(Extents, false);
BoxCollision->SetRelativeLocation(Center);
*/
//PCG->GenerationTrigger = EPCGComponentGenerationTrigger::GenerateAtRuntime;
//PCG->bOverrideGenerationRadii = true;
//PCG->GenerationRadii.GenerationRadius = 5000.0f;
//PCG->GenerationRadii.CleanupRadiusMultiplier = 2.0f;
        

//FTimerHandle DelayHandle;
//GetWorld()->GetTimerManager().SetTimer(DelayHandle, FTimerDelegate::CreateLambda([=]()
//    {
//    }), 1.0f, false);
// 
         
// Spawn based on pawn


/*   Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
   GetWorldTimerManager().SetTimer(handle, this, &APCGPolygonContent::UpdatePCG, 2.0, true);*/



   //int32 PolygonIndex = 0;
   //const float StaggerDelay = 0.2f;

   //for (const FGrassPolygonData& Data : PolygonDataList)
   //{
   //    GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateWeakLambda(this, [this, Data]()
   //        {
   //            SpawnIndividualPCGPolygonData(Data);
   //        }));

   //    ++PolygonIndex;
   //}