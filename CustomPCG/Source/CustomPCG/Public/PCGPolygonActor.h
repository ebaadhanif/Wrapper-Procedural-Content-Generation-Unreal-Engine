#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Components/BoxComponent.h"
#include "PCGComponent.h"
#include "PCGPolygonActor.generated.h"

UCLASS()
class CUSTOMPCG_API APCGPolygonActor : public AActor
{
    GENERATED_BODY()

public:
    APCGPolygonActor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CustomPCG|Components")
    USplineComponent* SplineComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CustomPCG|Components")
    UPCGComponent* PCGComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomPCG|Sampling", meta = (ClampMin = "0.0", UIMin = "0.0"))
    float InteriorSampleSpacing = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomPCG|Sampling", meta = (ClampMin = "0.0", UIMin = "0.0"))
    float InteriorBorderSpacing = 100.f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CustomPCG|Components")
    UBoxComponent* BoxCollision;

    bool isActive = false;

    // If you want these callable in Blueprints, add UFUNCTION + Category:
    // UFUNCTION(BlueprintCallable, Category="CustomPCG")
    void ActivatePCG();

    // UFUNCTION(BlueprintCallable, Category="CustomPCG")
    void DeActivatePCG();
};
