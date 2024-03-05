// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealSwissKnifeCommands.h"

#define LOCTEXT_NAMESPACE "FUnrealSwissKnifeModule"

void FUnrealSwissKnifeCommands::RegisterCommands() {
	UI_COMMAND(PluginAction, "UnrealSwissKnife", "", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
