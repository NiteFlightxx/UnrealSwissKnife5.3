// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "DevAssetManager.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPackageLoaded,TSoftObjectPtr<UWorld>,Level);

/**
 * 
 */
UCLASS()
class DEVTOOLKIT_API UDevAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	FString CurrentLoadPackage;

	UFUNCTION(BlueprintPure,CallInEditor,Category="UDevToolGameplayStatics|AssetManager",DisplayName="GetDevAssetManager")
	static UDevAssetManager*Get();
	
	UFUNCTION(BlueprintCallable,CallInEditor,Category="UDevToolGameplayStatics|AssetManager")
	FString DevAsyncLoadObject(const TSoftObjectPtr<UWorld> Level,FOnPackageLoaded OnPackageLoaded);
	
	UFUNCTION(BlueprintPure,CallInEditor,Category="UDevToolGameplayStatics|AssetManager")
	float GetCurrentLoadProgress(int32& LoadedCount,int32&RequestedCount)const;
};
