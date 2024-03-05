// Copyright Druid Mechanics


#include "DevAssetManager.h"

UDevAssetManager* UDevAssetManager::Get()
{
	UDevAssetManager * This=Cast<UDevAssetManager>(GEngine->AssetManager);
	if (This)
	{
		return This;
	}
	else
	{
		return NewObject<UDevAssetManager>();
	}
}

FString UDevAssetManager::DevAsyncLoadObject(const TSoftObjectPtr<UWorld> Level, FOnPackageLoaded OnPackageLoaded)
{
	const FString LevelName =Level.ToString();
	CurrentLoadPackage = LevelName;
	LoadPackageAsync(
		CurrentLoadPackage,
		FLoadPackageAsyncDelegate::CreateLambda([=](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
			{
			if (Result == EAsyncLoadingResult::Succeeded)
			{
				OnPackageLoaded.ExecuteIfBound(Level);
			}
			}), 0, PKG_ContainsMap);
			return LevelName;
}

float UDevAssetManager::GetCurrentLoadProgress(int32& LoadedCount, int32& RequestedCount) const
{
	return GetAsyncLoadPercentage(*CurrentLoadPackage);
}
