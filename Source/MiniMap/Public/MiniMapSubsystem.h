// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MiniMapBase.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MiniMapSubsystem.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniMapItemRegisteredSignature, UMiniMapItemIcon*, MiniMapItemIcon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniMapItemUnregisteredSignature, UMiniMapItemIcon*, MiniMapItemIcon);




UCLASS()
class MINIMAP_API UMiniMapSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	
 	UFUNCTION(BlueprintPure, Category = "MiniMap")
 	const TArray<AMiniMapBase*>& GetMiniMapBaseArr() const;

	UFUNCTION(BlueprintPure, Category = "MiniMap")
	const TArray<UMiniMapItemIcon*>& GetMiniMapItemIconArr() const;

	void RegisterMiniMapItem(UMiniMapItemIcon* MiniMapItem);
	void UnregisterMapIcon(UMiniMapItemIcon* MiniMapItem);
private:
	UPROPERTY(Transient)
	TArray<AMiniMapBase*>MiniMapBaseArr;

	UPROPERTY(Transient)
	TArray<UMiniMapItemIcon*> MiniMapItemIconArr;

public:
	UPROPERTY(BlueprintAssignable, Category = "MiniMap")
	FMiniMapItemRegisteredSignature OnMiniMapItemRegisteredSignature;

	UPROPERTY(BlueprintAssignable, Category = "MiniMap")
	FMiniMapItemUnregisteredSignature OnMiniMapItemUnregisteredSignature;

	
	
};
