// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "UnrealSwissKnifeStyle.h"

class FUnrealSwissKnifeCommands : public TCommands<FUnrealSwissKnifeCommands> {
public:
	FUnrealSwissKnifeCommands()
		: TCommands(TEXT("UnrealSwissKnifeStyle"), NSLOCTEXT("Contexts", "UnrealSwissKnifeStyle", "UnrealSwissKnifeStyle Plugin"), NAME_None, FUnrealSwissKnifeStyle::GetStyleSetName()) {
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> PluginAction;
};
