// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DayNightCycle/TimeOfDayManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeOfDayManager() {}

// Begin Cross Module References
DAYNIGHTCYCLE_API UClass* Z_Construct_UClass_ATimeOfDayManager();
DAYNIGHTCYCLE_API UClass* Z_Construct_UClass_ATimeOfDayManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
UPackage* Z_Construct_UPackage__Script_DayNightCycle();
// End Cross Module References

// Begin Class ATimeOfDayManager
void ATimeOfDayManager::StaticRegisterNativesATimeOfDayManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeOfDayManager);
UClass* Z_Construct_UClass_ATimeOfDayManager_NoRegister()
{
	return ATimeOfDayManager::StaticClass();
}
struct Z_Construct_UClass_ATimeOfDayManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TimeOfDayManager.h" },
		{ "ModuleRelativePath", "TimeOfDayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMultiplier_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "ModuleRelativePath", "TimeOfDayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Time of Day" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls how fast time passes\n" },
#endif
		{ "ModuleRelativePath", "TimeOfDayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how fast time passes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunLight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current time in hours (0-24)\n" },
#endif
		{ "ModuleRelativePath", "TimeOfDayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current time in hours (0-24)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SunLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeOfDayManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_TimeMultiplier = { "TimeMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDayManager, TimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMultiplier_MetaData), NewProp_TimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDayManager, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_SunLight = { "SunLight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDayManager, SunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunLight_MetaData), NewProp_SunLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeOfDayManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_TimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayManager_Statics::NewProp_SunLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeOfDayManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DayNightCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeOfDayManager_Statics::ClassParams = {
	&ATimeOfDayManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimeOfDayManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeOfDayManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeOfDayManager()
{
	if (!Z_Registration_Info_UClass_ATimeOfDayManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeOfDayManager.OuterSingleton, Z_Construct_UClass_ATimeOfDayManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeOfDayManager.OuterSingleton;
}
template<> DAYNIGHTCYCLE_API UClass* StaticClass<ATimeOfDayManager>()
{
	return ATimeOfDayManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeOfDayManager);
ATimeOfDayManager::~ATimeOfDayManager() {}
// End Class ATimeOfDayManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeOfDayManager, ATimeOfDayManager::StaticClass, TEXT("ATimeOfDayManager"), &Z_Registration_Info_UClass_ATimeOfDayManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeOfDayManager), 4052391407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_1804740851(TEXT("/Script/DayNightCycle"),
	Z_CompiledInDeferFile_FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
