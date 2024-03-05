// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "MiniMapItemIcon.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniMapItemDestroyedSignature, UMiniMapItemIcon*, MiniMapItemIcon);



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MINIMAP_API UMiniMapItemIcon : public UBillboardComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMiniMapItemIcon();
#if WITH_EDITOR
	virtual void PostInitProperties() override;
	virtual void PostLoad() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

private:
	void RefreshPreviewSprite();

protected:
	UPROPERTY(EditAnywhere, Category = "ItemIcon")
	UTexture2D* ItemIconTexture;

public:
	UPROPERTY(BlueprintAssignable, Category = "Minimap")
	FMiniMapItemDestroyedSignature OnMiniMapItemDestroyed;
};
