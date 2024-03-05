#include "HLSL.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"
#define LOCTEXT_NAMESPACE "FHLSLModule"

void FHLSLModule::StartupModule()
{
	// const FString ProjectShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	//  AddShaderSourceDirectoryMapping(TEXT("/Shader"), ProjectShaderDirectory);

	const FString PluginShaderDirectory = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("UnrealSwissKnife/Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/HLSL"), PluginShaderDirectory);
    
}

void FHLSLModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FHLSLModule, HLSL)