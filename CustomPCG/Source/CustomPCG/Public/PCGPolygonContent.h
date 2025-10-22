#pragma once
#include "CoreMinimal.h"
#include "PCGContent.h"
#include "Components/SplineComponent.h"
#include "PCGComponent.h"
#include "PCGPolygonActor.h"
#include "PCGPolygonContent.generated.h"

// --- STRUCT 2: For grass.shp ---
USTRUCT(BlueprintType)
struct FGrassPolygonData
{
    GENERATED_BODY();

    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 Id;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString Name;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") float Density;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") float Area;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString Type;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString Model;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 KindID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString KindDesc;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 DomainID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString DomainDesc;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 CountryID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString CountryDes;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 CategoryID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString CategoryDe;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 SubCategID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString SubCategDe;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 SpecificID;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString SpecificDe;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString EntityEnum;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") int32 Scale;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString Foliage;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString State;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") TArray<FVector> PolygonPoints;
    UPROPERTY(BlueprintReadWrite, Category = "CustomPCG|PolygonData") FString FileName;
};

UCLASS()
class CUSTOMPCG_API APCGPolygonContent : public APCGContent
{
    GENERATED_BODY()
public:

    APCGPolygonContent();

    void UpdatePCG();

    virtual void BeginPlay() override;

    // Called when the game starts or when spawned
    virtual void InitializeContent() override;

    virtual void Tick(float DeltaTime) override;

    void InitializePCGPolygonData(const FShapeRawData& Raw);

    void SpawnPCGPolygonData();

    void SpawnIndividualPCGPolygonData(const FGrassPolygonData& Data);

    // If you want this callable in Blueprints, add BlueprintCallable + Category.
    UFUNCTION()
    void OnPCGGraphGenerated(UPCGComponent* PCGComponent);

    void AssignPCGGraph(UPCGComponent* TargetPCG, const FString& GraphName);

    // If you want these visible in the editor, wrap with UPROPERTY + Category.
    UPROPERTY() ACesiumGeoreference* CesiumGeoreference = nullptr;
    UPROPERTY() ACesium3DTileset* Tileset = nullptr;

    TArray<FGrassPolygonData> PolygonDataList;

    UPROPERTY() AActor* ParentActor = nullptr;

    static int32     TotalPCGGraphsPoints;
    static int32     CompletedPolygonGraphs;
    static int32     ExpectedPolygonGraphs;
    static FDateTime GraphGenerationStartTime;

    static int32 TotalProcessedPoints;
    static int32 TotalSkippedPoints;

    UPROPERTY() TArray<APCGPolygonActor*> SpawnedPolygonActors;

    UPROPERTY() APawn* Pawn = nullptr;

    FTimerHandle handle;
};
