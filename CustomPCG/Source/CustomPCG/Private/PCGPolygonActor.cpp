// Fill out your copyright notice in the Description page of Project Settings.


#include "PCGPolygonActor.h"

// Sets default values
APCGPolygonActor::APCGPolygonActor()
{

    PrimaryActorTick.bCanEverTick = false;


   // BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
  //  RootComponent = BoxCollision;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
   // BoxCollision->SetMobility(EComponentMobility::Static);



    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    SplineComponent->SetupAttachment(RootComponent);

   // SplineComponent->SetMobility(EComponentMobility::Static);
    SplineComponent->PrimaryComponentTick.bCanEverTick = false;

   
    PCGComponent = CreateDefaultSubobject<UPCGComponent>(TEXT("PCGComponent"));

    InteriorSampleSpacing = 100.0f;

}

void APCGPolygonActor::ActivatePCG()
{

    if (isActive) return;

    PCGComponent->Generate();

    isActive = true; 

}

void APCGPolygonActor::DeActivatePCG()
{

    if (!isActive) return;

    PCGComponent->CleanupLocal(true, true);
    isActive = false;

}





