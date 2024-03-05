// Copyright Epic Games, Inc. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"

class  SAnimTextureDetails : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAnimTextureDetails)
	{
		
	}

	SLATE_END_ARGS();
private:
	TArray<TObjectPtr<UAnimSequence>> Animations;
	TArray<TSharedPtr<FString>> UVChannelOptions;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> UVChannelBox;

	
public:
	void Construct(const FArguments &InArgs);
	
	TSharedRef<SWidget> GenerateRequestedFilterComboItem(TSharedPtr<FString> InItem);
	void HandleRequesteFilterChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo);


	FReply CreateAllAssets();
	FReply CreateStaticMesh();
	FReply CreateTextures();
	FReply CreateDataAsset();
	FReply SetDataParams();
	FReply BakeData();

	UPROPERTY()
	USkeletalMesh * SkeletalMesh;
	
	FString CurrentAssetPath;
	FString GetCurrentAssetPath() const;
	void OnAssetSelected(const FAssetData& AssetData);
	
	TSharedRef<SWidget> MakeOptionWidget(TSharedPtr<FString> InOption);
	void OnOptionSelected(TSharedPtr<FString> NewValue, ESelectInfo::Type SelectInfo);
	
};