// Copyright Epic Games, Inc. All Rights Reserved.


#include "MiniMapDetailsCustomization.h"
#include "AssetToolsModule.h"
#include "Components/RuntimeVirtualTextureComponent.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "Editor.h"
#include "MiniMapSetBounds.h"
#include "Engine/Texture2D.h"
#include "Factories/Texture2dFactoryNew.h"

#include "ScopedTransaction.h"
#include "SResetToDefaultMenu.h"
#include "VT/RuntimeVirtualTexture.h"
#include "VT/VirtualTextureBuilder.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SWrapBox.h"

#define LOCTEXT_NAMESPACE "MiniMap"

FMiniMapIDetailCustomization::FMiniMapIDetailCustomization()
{
	
}

TSharedRef<IDetailCustomization> FMiniMapIDetailCustomization::MakeInstance()
{
	return MakeShareable(new FMiniMapIDetailCustomization);
}


namespace
{
	// Helper for adding text containing real values to the properties that are edited as power (or multiple) of 2
	void AddTextToProperty(IDetailLayoutBuilder& DetailBuilder, IDetailCategoryBuilder& CategoryBuilder, FName const& PropertyName, TSharedPtr<STextBlock>& TextBlock)
	{
		TSharedPtr<IPropertyHandle> PropertyHandle = DetailBuilder.GetProperty(PropertyName);
		DetailBuilder.HideProperty(PropertyHandle);

		TSharedPtr<SResetToDefaultMenu> ResetToDefaultMenu;

		CategoryBuilder.AddCustomRow(PropertyHandle->GetPropertyDisplayName())
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MinDesiredWidth(200.f)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.Padding(4.0f)
			[
				SNew(SWrapBox)
				.UseAllottedSize(true)

				+ SWrapBox::Slot()
				.Padding(FMargin(0.0f, 2.0f, 2.0f, 0.0f))
				[
					SAssignNew(TextBlock, STextBlock)
				]
			]

			+ SHorizontalBox::Slot()
			[
				PropertyHandle->CreatePropertyValueWidget()
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(4.0f)
			[
				// Would be better to use SResetToDefaultPropertyEditor here but that is private in the PropertyEditor lib
				SAssignNew(ResetToDefaultMenu, SResetToDefaultMenu)
			]
		];

		ResetToDefaultMenu->AddProperty(PropertyHandle.ToSharedRef());
	}
}


void FMiniMapIDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
		// Get and store the linked URuntimeVirtualTexture
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() > 1)
	{
		return;
	}

	// Set UIMax dependent on adaptive page table setting

	// Cache detail builder to refresh view updates
	CachedDetailBuilder = &DetailBuilder;

	// Add refresh callback for all properties 
	DetailBuilder.GetProperty(FName(TEXT("TileCount")))->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FMiniMapIDetailCustomization::RefreshTextDetails));
	DetailBuilder.GetProperty(FName(TEXT("TileSize")))->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FMiniMapIDetailCustomization::RefreshTextDetails));
	DetailBuilder.GetProperty(FName(TEXT("TileBorderSize")))->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FMiniMapIDetailCustomization::RefreshTextDetails));
	DetailBuilder.GetProperty(FName(TEXT("bAdaptive")))->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FMiniMapIDetailCustomization::RefreshDetailsView));

	// Initialize text blocks
	RefreshTextDetails();
}



void FMiniMapIDetailCustomization::RefreshTextDetails()
{
	
}

void FMiniMapIDetailCustomization::RefreshDetailsView()
{
	if (CachedDetailBuilder != nullptr)
	{
		CachedDetailBuilder->ForceRefreshDetails();
	}
}

TSharedRef<IDetailCustomization> FUMiniMapComponentDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FUMiniMapComponentDetailsCustomization);
}

FUMiniMapComponentDetailsCustomization::FUMiniMapComponentDetailsCustomization()
{
	
}

bool FUMiniMapComponentDetailsCustomization::IsSetBoundsEnabled() const
{
	return MiniMapComponent->GetBoundsAlignActor()!=nullptr;
}

FReply FUMiniMapComponentDetailsCustomization::SetBounds()
{

		const FScopedTransaction Transaction(LOCTEXT("Transaction_SetBounds", "Set RuntimeVirtualTextureComponent Bounds"));
		MiniMap::SetBounds(MiniMapComponent);
		// Force update of editor view widget.
		GEditor->NoteSelectionChange(false);
		return FReply::Handled();
	
}

bool FUMiniMapComponentDetailsCustomization::IsBuildStreamedMipsEnabled() const
{
	return 0;
}

EVisibility FUMiniMapComponentDetailsCustomization::IsBuildWarningIconVisible() const
{
	return EVisibility::Visible;
}

FReply FUMiniMapComponentDetailsCustomization::BuildStreamedMips()
{
	return  FReply::Handled();
}

void FUMiniMapComponentDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	// Get and store the linked URuntimeVirtualTextureComponent.
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() > 1)
	{
		return;
	}
	MiniMapComponent = Cast<UMiniMapComponent>(ObjectsBeingCustomized[0].Get());
	if (MiniMapComponent == nullptr)
	{
		return;
	}
	// Apply custom widget for SetBounds.
	TSharedRef<IPropertyHandle> SetBoundsPropertyHandle = DetailBuilder.GetProperty(TEXT("bSetBoundsButton"));
	DetailBuilder.EditDefaultProperty(SetBoundsPropertyHandle)->CustomWidget()
	.NameContent()
	[
		SNew(STextBlock)
		.Font(IDetailLayoutBuilder::GetDetailFont())
		.Text(LOCTEXT("Button_SetBounds", "Set Bounds"))
		.ToolTipText(LOCTEXT("Button_SetBounds_Tooltip", "Set the rotation to match the Bounds Align Actor and expand bounds to include all primitives that write to this virtual texture."))
	]
	.ValueContent()
	.MinDesiredWidth(125.f)
	[
		SNew(SButton)
		.VAlign(VAlign_Center)
		.HAlign(HAlign_Center)
		.ContentPadding(2)
		.Text(LOCTEXT("Button_SetBounds", "Set Bounds"))
		.OnClicked(this, &FUMiniMapComponentDetailsCustomization::SetBounds)
		.IsEnabled(this, &FUMiniMapComponentDetailsCustomization::IsSetBoundsEnabled)
	];
}


#undef LOCTEXT_NAMESPACE
