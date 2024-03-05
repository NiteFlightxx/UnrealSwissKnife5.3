// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniMapItemIcon.h"

#include "MiniMapSubsystem.h"


// Sets default values for this component's properties
UMiniMapItemIcon::UMiniMapItemIcon():
ItemIconTexture(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
#if WITH_EDITOR
void UMiniMapItemIcon::PostInitProperties()
{
	Super::PostInitProperties();
	RefreshPreviewSprite();
}

void UMiniMapItemIcon::PostLoad()
{
	Super::PostLoad();
	RefreshPreviewSprite();
}

void UMiniMapItemIcon::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	RefreshPreviewSprite();
}
#endif


// Called when the game starts
void UMiniMapItemIcon::BeginPlay()
{
	Super::BeginPlay();
	if (GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		SetComponentTickEnabled(false);
		return;
	}
	UMiniMapSubsystem*MiniMapSubsystem=
		GetWorld()->GetGameInstance()->GetSubsystem<UMiniMapSubsystem>();
	if (MiniMapSubsystem)
	{
		MiniMapSubsystem->RegisterMiniMapItem(this);
	}
	SetComponentTickEnabled(IsValid(MiniMapSubsystem));
}

void UMiniMapItemIcon::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (GetNetMode() == ENetMode::NM_DedicatedServer)
		return;
	
	UMiniMapSubsystem*MiniMapSubsystem=
		GetWorld()->GetGameInstance()->GetSubsystem<UMiniMapSubsystem>();
	if (MiniMapSubsystem)
		MiniMapSubsystem->UnregisterMapIcon(this);
	
	OnMiniMapItemDestroyed.Broadcast(this);
}

// Called every frame
void UMiniMapItemIcon::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMiniMapItemIcon::RefreshPreviewSprite()
{
	if (ItemIconTexture)
	{
		const float IconTextureSize = FMath::Max(ItemIconTexture->GetSurfaceWidth(), ItemIconTexture->GetSurfaceHeight());
		if (IconTextureSize > 0)
			SetRelativeScale3D(FVector(160.0f / IconTextureSize));
		else
			SetRelativeScale3D(FVector(1, 1, 1));
		SetSprite(ItemIconTexture);
	}
}

