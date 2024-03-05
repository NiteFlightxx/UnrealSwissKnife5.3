using UnrealBuildTool;

public class UnrealSwissKnife : ModuleRules
{
    public UnrealSwissKnife(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Json",
                "JsonUtilities",
                "UMG",
                "RenderCore",
                "HTTP",
                "DeveloperSettings",
                "Niagara",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Projects",
                "InputCore",
                "UnrealEd",
                "ToolMenus",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "AnimationDataController",
                "MaterialEditor",
                "ImageWriteQueue",
                "Landscape",
                "AssetTools",
                "EditorStyle",
                "Settings",
                "PhysicsCore",
                "InterchangeEngine",
                "InterchangeNodes",
                "InterchangeCommonParser",
                "InterchangeFactoryNodes",
                "InterchangeImport",
                "InterchangePipelines",
                "MessageLog",
                "ToolWidgets",
                "PluginUtils", 
                "PropertyEditor"
            }
        );
    }
}