// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniMapBase.h"

#include "MiniMapComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"



AMiniMapBase::AMiniMapBase():
MapCentralPosition(0.f),
MinimumX(0.f),
MaximumX(0.f),
MinimumY(0.f),
MaximumY(0.f)
{

	PrimaryActorTick.bCanEverTick = true;

	RootComponent=MiniMapComponent = CreateDefaultSubobject<UMiniMapComponent>(TEXT("MiniMapComponent"));
	
	
	BoundsBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	BoundsBox->SetBoxExtent(FVector(.5f, .5f, 1.f), false);
	BoundsBox->bDrawOnlyIfSelected = true;
//	BoundsBox->SetIsVisualizationComponent(true);
//	BoundsBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//	BoundsBox->SetCanEverAffectNavigation(false);
	BoundsBox->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
//	BoundsBox->SetGenerateOverlapEvents(false);
	BoundsBox->SetupAttachment(MiniMapComponent);
	BoundsBox->SetHiddenInGame(false,false);
	BoundsBox->SetVisibility(true);

	bIsSpatiallyLoaded = false;

	CameraSpringArm=CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	
	CameraSpringArm->SetupAttachment(MiniMapComponent);

	CameraSpringArm->bDoCollisionTest=false;
	
	CaptureComponent=CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent"));
	CaptureComponent->SetupAttachment(CameraSpringArm);
	CaptureComponent->ProjectionType=ECameraProjectionMode::Orthographic;
	
	
	
}

// Called when the game starts or when spawned
void AMiniMapBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMiniMapBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AMiniMapBase::SetMapCentralPosition(FVector CentralPosition)
{
	MapCentralPosition=CentralPosition;
}

float AMiniMapBase::GetMinimumX() const
{
	return  MinimumX;
}

void AMiniMapBase::SetMinimumX(float MinX)
{
	MinimumX=MinX;
}

float AMiniMapBase::GetMaximumX() const
{
	return MaximumX;
}

void AMiniMapBase::SetMaximumX(float MaxX)
{
	MaximumX=MaxX;
}

float AMiniMapBase::GetMinimumY() const
{
	return MinimumY;
}

void AMiniMapBase::SetMinimumY(float MinY)
{
	MinimumY=MinY;
}

float AMiniMapBase::GetMaximumY() const
{
	return MaximumY;
}

void AMiniMapBase::SetMaximumY(float MaxY)
{
	MaximumY=MaxY;
}

