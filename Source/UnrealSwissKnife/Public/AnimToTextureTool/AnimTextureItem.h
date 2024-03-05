
#pragma once

#include "CoreMinimal.h"

class  SAnimTextureItem : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAnimTextureItem)
	{
		
	}

	SLATE_END_ARGS();

	void Construct(const FArguments &InArgs);

	FReply OnButtonClickedAdd();
	FReply OnButtonClickedMinus();
	FReply OnButtonClickedAllMinus();

	void OnSlotState(TSharedRef<SWidget>SlotInstance,TSharedPtr<FString>&ItemText);
	
};