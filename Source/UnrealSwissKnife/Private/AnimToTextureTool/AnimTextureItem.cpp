#include "AnimToTextureTool//AnimTextureItem.h"
// #define LOCTEXT_NAMESPACE "FSlatePluginModule"

void SAnimTextureItem::Construct(const FArguments& InArgs)
{
}

FReply SAnimTextureItem::OnButtonClickedAdd()
{
	return FReply::Handled();
}

FReply SAnimTextureItem::OnButtonClickedMinus()
{
	return FReply::Handled();
}

FReply SAnimTextureItem::OnButtonClickedAllMinus()
{
	return FReply::Handled();
}

void SAnimTextureItem::OnSlotState(TSharedRef<SWidget> SlotInstance, TSharedPtr<FString>& ItemText)
{
}
