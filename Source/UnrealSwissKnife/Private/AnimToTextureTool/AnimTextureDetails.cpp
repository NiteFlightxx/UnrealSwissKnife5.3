// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimToTextureTool/AnimTextureDetails.h"

#include "PropertyCustomizationHelpers.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"

//#include "AnimToTexture/Public/AnimToTextureDataAsset.h"
#define LOCTEXT_NAMESPACE "FSlatePluginModule"


void SAnimTextureDetails::Construct(const FArguments& InArgs)
{
	
	UVChannelOptions.Add(MakeShareable(new FString(TEXT("1"))));
	UVChannelOptions.Add(MakeShareable(new FString(TEXT("2"))));
	UVChannelOptions.Add(MakeShareable(new FString(TEXT("3"))));
	
	
	ChildSlot
[
	SNew(SScrollBox)

	// ComboBox Slot
	+SScrollBox::Slot()
	.Padding(5) // Add some padding for visual separation
	[
		SNew(SOverlay)
		+SOverlay::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SVerticalBox)
			
			+SVerticalBox::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				
			SNew(SOverlay)
			
			+SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SHorizontalBox)

				+SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SHorizontalBox)
					
					+SHorizontalBox::Slot()
					.HAlign(HAlign_Right)
					.VAlign(VAlign_Fill)
					[
					SNew(SCheckBox)
					.IsChecked(ECheckBoxState::Checked )
					.ToolTipText(FText::FromString(TEXT("Enforce Power of Two"))) // 提示文本
					[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("Enforce Power of Two"))) // 按钮文本
						]
					]
					
				]
				
				+SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(2) // 为组合框添加一些间隔
				[

				SNew(SHorizontalBox)
				
				+SHorizontalBox::Slot()
					.HAlign(HAlign_Right)
					.VAlign(VAlign_Fill)
					.Padding(2) 
					[
						SNew(STextBlock)
						.Text(FText::FromString(TEXT("UVChannel"))) // 按钮文本
					]
					
				+SHorizontalBox::Slot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
				[
					SAssignNew(UVChannelBox,SComboBox<TSharedPtr<FString>>)
					.OptionsSource(&UVChannelOptions) // 设置选项来源
					.OnGenerateWidget_Lambda([](TSharedPtr<FString> Item)
					{
						return SNew(STextBlock).Text(FText::FromString(*Item));
					}) // 为每个选项生成一个文本控件
					.OnSelectionChanged_Lambda([](TSharedPtr<FString> Selection, ESelectInfo::Type SelectInfo)
					{
						// 这里可以处理选项变更事件
					})
					[
						SNew(STextBlock).Text(FText::FromString(TEXT("1"))) // 默认显示文本
						
					]
			]
				]
				
			]
			]
			
			// 添加第一个按钮
			   + SVerticalBox::Slot()
			   .HAlign(HAlign_Fill)
			   .VAlign(VAlign_Fill)
			   .Padding(2) // 按钮之间的间隔
			   [
				   SNew(SButton)
				   .Text(FText::FromString(TEXT("Create All Assets"))) // 按钮文本
				//   .OnClicked(this,&SAnimTextureDetails::CreateAllAssets())
			   ]

			 // 添加第二个按钮
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(2) // 按钮之间的间隔
				[
					SNew(SButton)
					.Text(FText::FromString(TEXT("Create DataAsset"))) // 按钮文本
				]

			 // 添加第三个按钮
			 + SVerticalBox::Slot()
			 .HAlign(HAlign_Fill)
			 .VAlign(VAlign_Fill)
			 .Padding(2) // 按钮之间的间隔
			 [
				 SNew(SButton)
				 .Text(FText::FromString(TEXT("Create Static Mesh"))) // 按钮文本
			 ]

			 // 添加第四个按钮
			 + SVerticalBox::Slot()
			 .HAlign(HAlign_Fill)
			 .VAlign(VAlign_Fill)
			 .Padding(2) // 按钮之间的间隔
			 [
				 SNew(SButton)
				 .Text(FText::FromString(TEXT("Create Textures"))) // 按钮文本
			 ]

			 // 添加第五个按钮
			 + SVerticalBox::Slot()
			 .HAlign(HAlign_Fill)
			 .VAlign(VAlign_Fill)
			 .Padding(2) // 按钮之间的间隔
			 [
				 SNew(SButton)
				 .Text(FText::FromString(TEXT("Set Data Params"))) // 按钮文本
			 ]
			 
			 // 添加第六个按钮
			 + SVerticalBox::Slot()
			 .HAlign(HAlign_Fill)
			 .VAlign(VAlign_Fill)
			 .Padding(2) // 按钮之间的间隔
			 [
				 SNew(SButton)
				 .Text(FText::FromString(TEXT("Bake Data"))) // 按钮文本
			 ]

			 + SVerticalBox::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(2) // 按钮之间的间隔
			 [
			  SNew(SObjectPropertyEntryBox)
			 .OnObjectChanged(this,&SAnimTextureDetails::OnAssetSelected)
//			 .AllowedClass(UAnimToTextureDataAsset::StaticClass())
			]
			
			 + SVerticalBox::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(2) // 按钮之间的间隔
			 [
			  SNew(SObjectPropertyEntryBox)
			 .OnObjectChanged(this,&SAnimTextureDetails::OnAssetSelected)
			 .AllowedClass(USkeletalMesh::StaticClass())
			]
			 
		]
	]

];
	
}

TSharedRef<SWidget> SAnimTextureDetails::GenerateRequestedFilterComboItem(TSharedPtr<FString> InItem)
{
	return SNew(STextBlock)
		.Text(FText::FromString(*InItem));
}

void SAnimTextureDetails::HandleRequesteFilterChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo)
{
}

FReply SAnimTextureDetails::CreateAllAssets()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::CreateStaticMesh()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::CreateTextures()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::CreateDataAsset()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::SetDataParams()
{
	return FReply::Handled();
}

FReply SAnimTextureDetails::BakeData()
{
	return FReply::Handled();
}

FString SAnimTextureDetails::GetCurrentAssetPath() const
{
	return CurrentAssetPath;
}

void SAnimTextureDetails::OnAssetSelected(const FAssetData& AssetData)
{
}


TSharedRef<SWidget> SAnimTextureDetails::MakeOptionWidget(TSharedPtr<FString> InOption)
{
	return SNew(STextBlock).Text(FText::FromString(*InOption));
}

void SAnimTextureDetails::OnOptionSelected(TSharedPtr<FString> NewValue, ESelectInfo::Type SelectInfo)
{
}

#undef LOCTEXT_NAMESPACE
