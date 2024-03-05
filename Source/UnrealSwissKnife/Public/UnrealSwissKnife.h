#pragma once

#include "CoreMinimal.h"

#include "Modules/ModuleManager.h"

class FUnrealSwissKnifeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    void PluginButtonClicked();

private:
    void RegisterMenus();
    TSharedRef<SWidget> CreateToolbarDropdown();
    
    TSharedRef<class SDockTab> OnSpawnVATTab(const class FSpawnTabArgs& SpawnTabArgs);

    bool IsProcessRunning(const FString& ProcessName);
	
    TSharedPtr<class FUICommandList> UnrealSwissKnifeCommands;
    TSharedPtr<class FUICommandList> VertexAnimTexture;
    TSharedPtr<class SAnimTextureDetails> AnimTextureDetails;
};
