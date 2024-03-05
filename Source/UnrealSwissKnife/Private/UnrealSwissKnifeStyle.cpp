// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealSwissKnifeStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FUnrealSwissKnifeStyle::StyleInstance = nullptr;

void FUnrealSwissKnifeStyle::Initialize() {
	if (!StyleInstance.IsValid()) {
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FUnrealSwissKnifeStyle::Shutdown() {
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FUnrealSwissKnifeStyle::GetStyleSetName() {
	static FName StyleSetName(TEXT("UnrealSwissKnifeStyle"));
	return StyleSetName;
}

#define IMAGE_BRUSH(RelativePath, ...) FSlateImageBrush(Style->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#define BOX_BRUSH(RelativePath, ...) FSlateBoxBrush(Style->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#define BORDER_BRUSH(RelativePath, ...) FSlateBorderBrush(Style->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#define TTF_FONT(RelativePath, ...) FSlateFontInfo(Style->RootToContentDir(RelativePath, TEXT(".ttf")), __VA_ARGS__)
#define OTF_FONT(RelativePath, ...) FSlateFontInfo(Style->RootToContentDir(RelativePath, TEXT(".otf")), __VA_ARGS__)

const FVector2D Icon16x16(16, 16);
const FVector2D Icon20x20(20, 20);
const FVector2D Icon40x40(40, 40);
const FVector2D IconFullScreen(720, 300);

TSharedRef<FSlateStyleSet> FUnrealSwissKnifeStyle::Create() {
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("UnrealSwissKnifeStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("UnrealSwissKnife")->GetBaseDir() / TEXT("Resources"));

	Style->Set("UnrealSwissKnife.PluginAction", new IMAGE_BRUSH(TEXT("UnrealSwissKnife40x"), Icon40x40));
	Style->Set("UnrealSwissKnife.VATTool", new IMAGE_BRUSH(TEXT("VAT40x"), Icon40x40));

	return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT

void FUnrealSwissKnifeStyle::ReloadTextures() {
	if (FSlateApplication::IsInitialized()) {
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FUnrealSwissKnifeStyle::Get() {
	return *StyleInstance;
}
