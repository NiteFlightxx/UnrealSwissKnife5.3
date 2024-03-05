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
	TArray< TSharedPtr< FString > >	AnimTextureType;
	TSharedPtr<SWidgetSwitcher> WidgetSwitcher;
	
	TArray<TObjectPtr<UAnimSequence>> Animations;
	
	void Construct(const FArguments &InArgs);
	
	TSharedRef<SWidget> GenerateRequestedFilterComboItem(TSharedPtr<FString> InItem);
	void HandleRequesteFilterChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo);
	
};