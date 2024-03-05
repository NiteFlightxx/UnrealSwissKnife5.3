// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimToTextureTool//AnimTextureDetails.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#define LOCTEXT_NAMESPACE "FSlatePluginModule"
void SAnimTextureDetails::Construct(const FArguments& InArgs)

{
	
	AnimTextureType.Add(MakeShared<FString>(TEXT("Bone")));
	AnimTextureType.Add(MakeShared<FString>(TEXT("Vertex")));
	
	ChildSlot
[
	SNew(SVerticalBox)

	// ComboBox Slot
	+SVerticalBox::Slot()
	.Padding(5) // Add some padding for visual separation
	.AutoHeight() // Adjust the size of the slot to fit the content
	[
		SNew(SComboBox<TSharedPtr<FString>>)
		.OptionsSource(&AnimTextureType)
		.InitiallySelectedItem(AnimTextureType[0])
		.OnGenerateWidget(this, &SAnimTextureDetails::GenerateRequestedFilterComboItem)
		.OnSelectionChanged(this, &SAnimTextureDetails::HandleRequesteFilterChanged)
		.ContentPadding(FMargin(4.0, 1.0f))
	]

	// WidgetSwitcher Slot
	+SVerticalBox::Slot()
	.Padding(5) // Consistent padding with the ComboBox
	.AutoHeight() // Adjust the size of the slot to fit the content
	[
		SAssignNew(WidgetSwitcher, SWidgetSwitcher)
		.WidgetIndex(0) // Optionally set the initial widget index if needed

		// First WidgetSwitcher Slot
		+ SWidgetSwitcher::Slot()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("HighlightLabel", "2222222222Only"))
		]

		// Second WidgetSwitcher Slot
		+ SWidgetSwitcher::Slot()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("HighlightOnlyCheckBoxLabel", "11111111111 Only"))
		]
	]
	+SVerticalBox::Slot()
	.Padding(5) 
	.AutoHeight()
	
	
];

	
}

TSharedRef<SWidget> SAnimTextureDetails::GenerateRequestedFilterComboItem(TSharedPtr<FString> InItem)
{
	return SNew(STextBlock)
		.Text(FText::FromString(*InItem));
}

void SAnimTextureDetails::HandleRequesteFilterChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo)
{
	if (Item.IsValid() && WidgetSwitcher.IsValid())
	{
		if (*Item == TEXT("Bone"))
		{
			WidgetSwitcher->SetActiveWidgetIndex(0);
		}
		else if (*Item == TEXT("Vertex"))
		{
			WidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}



#undef LOCTEXT_NAMESPACE