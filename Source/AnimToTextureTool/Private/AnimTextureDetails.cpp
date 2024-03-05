// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimTextureDetails.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"

void SAnimTextureDetails::Construct(const FArguments& InArgs)
{
}

FReply SAnimTextureDetails::OnButtonClickedAdd()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::OnButtonClickedMinus()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::OnButtonClickedAllMinus()
{
	return FReply::Handled();
}

void SAnimTextureDetails::OnSlotState(TSharedRef<SWidget> SlotInstance, TSharedPtr<FString>& ItemText)
{
}
