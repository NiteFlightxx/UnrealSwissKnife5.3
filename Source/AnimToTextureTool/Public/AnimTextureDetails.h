// Copyright Epic Games, Inc. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "XmlParser/Public/XmlFile.h"

/**
 * 
 */
// Copyright Epic Games, Inc. All Rights Reserved.
class  SAnimTextureDetails : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAnimTextureDetails)
	{
		
	}

	SLATE_END_ARGS();

	void Construct(const FArguments &InArgs);

	FReply OnButtonClickedAdd();
	FReply OnButtonClickedMinus();
	FReply OnButtonClickedAllMinus();

	void OnSlotState(TSharedRef<SWidget>SlotInstance,TSharedPtr<FString>&ItemText);
	
};