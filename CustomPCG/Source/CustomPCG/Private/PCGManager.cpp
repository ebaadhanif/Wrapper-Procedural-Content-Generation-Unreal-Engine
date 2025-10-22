#include "PCGManager.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "PCGPointContent.h"
#include "PCGPolygonContent.h"
#include "FShapeFileReader.h"


APCGManager::APCGManager()
{
   // PrimaryActorTick.bCanEverTick = true;
}



void APCGManager::BeginPlay()
{
    Super::BeginPlay();


    LoadDataforPCGPoint();
    LoadDataforPCGPolygon();
  
}





void APCGManager::LoadDataforPCGPoint()
{
    FShapeFileReader::LoadDllForGDAL();

    FString ShapefileFolder = FPaths::ProjectContentDir() + TEXT("Shapefiles/PointData/");
    FPaths::NormalizeDirectoryName(ShapefileFolder);

    if (!FPaths::DirectoryExists(ShapefileFolder))
    {
        UE_LOG(LogTemp, Error, TEXT("Shapefile folder does not exist: %s"), *ShapefileFolder);
        return;
    }

    TArray<FString> ShapefilePaths;
    IFileManager::Get().FindFilesRecursive(ShapefilePaths, *ShapefileFolder, TEXT("*.shp"), true, false);

    if (ShapefilePaths.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT(" No shapefiles found in directory: %s"), *ShapefileFolder);
        return;
    }

    for (const FString& ShapefilePath : ShapefilePaths)
    {
        UE_LOG(LogTemp, Log, TEXT(" Loading shapefile: %s"), *ShapefilePath);

        FShapeRawData RawData = FShapeFileReader::ReadShapefileRawData(ShapefilePath);

        APCGPointContent* PointContent = NewObject<APCGPointContent>(this, APCGPointContent::StaticClass());
        if (!PointContent)
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create APCGPointContent for file: %s"), *ShapefilePath);
            continue;
        }

        PointContent->InitializePCGPointData(RawData);
        PointContent->SpawnPCGPointData();
    }


}



void APCGManager::LoadDataforPCGPolygon() {

    FShapeFileReader::LoadDllForGDAL();


    
    FString ShapefileFolder = FPaths::ProjectContentDir() + TEXT("Shapefiles/PolygonData/");

    FPaths::NormalizeDirectoryName(ShapefileFolder);

    if (!FPaths::DirectoryExists(ShapefileFolder))
    {
        UE_LOG(LogTemp, Error, TEXT("Shapefile folder does not exist: %s"), *ShapefileFolder);
        return;
    }

    TArray<FString> ShapefilePaths;
    IFileManager::Get().FindFilesRecursive(ShapefilePaths, *ShapefileFolder, TEXT("*.shp"), true, false);

    if (ShapefilePaths.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT(" No shapefiles found in directory: %s"), *ShapefileFolder);
        return;
    }

    for (const FString& ShapefilePath : ShapefilePaths)
    {
        UE_LOG(LogTemp, Log, TEXT(" Loading shapefile: %s"), *ShapefilePath);

        FShapeRawData RawData = FShapeFileReader::ReadShapefileRawData(ShapefilePath);

       
        FActorSpawnParameters params;
        params.Owner = this; 

        APCGPolygonContent* PolygonContent = GetWorld()->SpawnActor<APCGPolygonContent>(APCGPolygonContent::StaticClass(),FVector::ZeroVector, FRotator::ZeroRotator, params);

        if (!PolygonContent)
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create APCGPolygonContent for file: %s"), *ShapefilePath);
            continue;
        }
     
        PolygonContent->InitializePCGPolygonData(RawData);
        PolygonContent->SpawnPCGPolygonData();

    }

}








