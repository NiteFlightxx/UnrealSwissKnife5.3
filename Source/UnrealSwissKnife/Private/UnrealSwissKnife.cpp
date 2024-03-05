#include "UnrealSwissKnife.h"
#include "UnrealSwissKnifeStyle.h"
#include "UnrealSwissKnifeCommands.h"

#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "Interfaces/IMainFrameModule.h"
#include "Styling/SlateIconFinder.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Windows/MinWindows.h"
#include "Interfaces/IPluginManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "ISettingsModule.h"
#include "Fonts/SlateFontInfo.h"
#include "Misc/Paths.h"
#include "Misc/EngineVersion.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SOverlay.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableText.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/STableRow.h"
#include "Widgets/Views/SListView.h"
#include "Styling/CoreStyle.h"
#include "Styling/AppStyle.h"
#include <TlHelp32.h>

#include "AnimToTextureTool/AnimTextureDetails.h"


static const FName VATTabName("Vertex Anim Texture Tool");

#define LOCTEXT_NAMESPACE "FUnrealSwissKnifeModule"


void FUnrealSwissKnifeModule::StartupModule()
{
	FUnrealSwissKnifeStyle::Initialize();
	FUnrealSwissKnifeStyle::ReloadTextures();

	
	FUnrealSwissKnifeCommands::Register();
	
	UnrealSwissKnifeCommands = MakeShareable(new FUICommandList);

	UnrealSwissKnifeCommands->MapAction(
		FUnrealSwissKnifeCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FUnrealSwissKnifeModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FUnrealSwissKnifeModule::RegisterMenus));

	 FGlobalTabmanager::Get()->RegisterNomadTabSpawner(VATTabName, FOnSpawnTab::CreateRaw(this, &FUnrealSwissKnifeModule::OnSpawnVATTab))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
    
}

void FUnrealSwissKnifeModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FUnrealSwissKnifeStyle::Shutdown();

	FUnrealSwissKnifeCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(VATTabName);
    
}

void FUnrealSwissKnifeModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(VATTabName);
}

void FUnrealSwissKnifeModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);
	
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("UnrealSwissKnife");
		FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitComboButton(
			"UnrealSwissKnife",
			FUIAction(
				FExecuteAction(),
				FCanExecuteAction(),
				FGetActionCheckState()
			),
			FOnGetContent::CreateRaw(this, &FUnrealSwissKnifeModule::CreateToolbarDropdown),
			LOCTEXT("UnrealSwissKnifeName", "UnrealSwissKnifeTool"),
			LOCTEXT("UnrealSwissKnife", "List of actions for UnrealSwissKnife"),
			FSlateIcon(FUnrealSwissKnifeStyle::Get().GetStyleSetName(), FName("UnrealSwissKnife.PluginAction"))
		));

			Entry.SetCommandList(UnrealSwissKnifeCommands);
	

}

TSharedRef<SWidget> FUnrealSwissKnifeModule::CreateToolbarDropdown()
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("UnrealSwissKnife");
	
	FMenuBuilder MenuBuilder (false,nullptr);
	MenuBuilder.BeginSection("UnrealSwissKnifeSection", FText::FromString("UnrealSwissKnifeTool "+Plugin->GetDescriptor().VersionName));
	{
		MenuBuilder.AddMenuEntry(
			LOCTEXT("UnrealSwissKnifeButton", "VertexAnimTextureTool"),
			LOCTEXT("UnrealSwissKnifeButtonTooltip", "Execute Vertex Anim Texture Tool"),
			FSlateIcon(FUnrealSwissKnifeStyle::Get().GetStyleSetName(), "UnrealSwissKnife.VATTool"),
		
			FUIAction(
				FExecuteAction::CreateRaw(this, &FUnrealSwissKnifeModule::PluginButtonClicked),
				FCanExecuteAction::CreateLambda([this]() {
					return true;
				})
			),
			NAME_None
			);
	
	}
	MenuBuilder.EndSection();

	MenuBuilder.AddSeparator();
	
	MenuBuilder.AddMenuEntry(
	LOCTEXT("UnrealSwissKnifeMenu", "Open USK Settings"),
	LOCTEXT("UnrealSwissKnifeButtonTooltip", "Brings you to the UnrealSwissKnife Settings"),
	FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Settings"),
	FUIAction(
		FExecuteAction::CreateLambda([this]() {
			// Send user to plugin
			FModuleManager::LoadModuleChecked<ISettingsModule>("Settings")
				.ShowViewer("Editor", "Plugins", "UnrealSwissKnife");
		})
	),
	NAME_None
);



	MenuBuilder.AddSeparator();
	MenuBuilder.AddMenuEntry(
		LOCTEXT("About UnrealSwissKnifeMenu","About USK Plugin"),
		LOCTEXT("UnrealSwissKnifePluginButtonTooltip", "More information about UnrealSwissKnife"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(),"MessageLog.Action"),
		FUIAction(
			FExecuteAction::CreateLambda([this]()
			{
				TSharedPtr<SWindow>AboutWindow=
					SNew(SWindow)
					[
					SNew(SBorder)
					];
			}
				)
			)
		);

	
	return MenuBuilder.MakeWidget();
}

TSharedRef<SDockTab> FUnrealSwissKnifeModule::OnSpawnVATTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
	LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
	FText::FromString(TEXT("FSlatePluginModule::OnSpawnVATTab")),
	FText::FromString(TEXT("SlatePlugin.cpp"))
	);
	
	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
		//SNew(SVerticalBox)
		//SAssignNew(AnimTextureDetails,SAnimTextureDetails)
		SAssignNew(AnimTextureDetails,SAnimTextureDetails)
			
		];
}

bool FUnrealSwissKnifeModule::IsProcessRunning(const FString& ProcessName)
{
	return false;
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FUnrealSwissKnifeModule, UnrealSwissKnife)