// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Udungeon/UdungeonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdungeonGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UDUNGEON_API UClass* Z_Construct_UClass_AUdungeonGameMode();
UDUNGEON_API UClass* Z_Construct_UClass_AUdungeonGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Udungeon();
// End Cross Module References

// Begin Class AUdungeonGameMode
void AUdungeonGameMode::StaticRegisterNativesAUdungeonGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdungeonGameMode);
UClass* Z_Construct_UClass_AUdungeonGameMode_NoRegister()
{
	return AUdungeonGameMode::StaticClass();
}
struct Z_Construct_UClass_AUdungeonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UdungeonGameMode.h" },
		{ "ModuleRelativePath", "UdungeonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdungeonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUdungeonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Udungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdungeonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdungeonGameMode_Statics::ClassParams = {
	&AUdungeonGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdungeonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUdungeonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUdungeonGameMode()
{
	if (!Z_Registration_Info_UClass_AUdungeonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdungeonGameMode.OuterSingleton, Z_Construct_UClass_AUdungeonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUdungeonGameMode.OuterSingleton;
}
template<> UDUNGEON_API UClass* StaticClass<AUdungeonGameMode>()
{
	return AUdungeonGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUdungeonGameMode);
AUdungeonGameMode::~AUdungeonGameMode() {}
// End Class AUdungeonGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUdungeonGameMode, AUdungeonGameMode::StaticClass, TEXT("AUdungeonGameMode"), &Z_Registration_Info_UClass_AUdungeonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdungeonGameMode), 1596749987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_1066165533(TEXT("/Script/Udungeon"),
	Z_CompiledInDeferFile_FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
