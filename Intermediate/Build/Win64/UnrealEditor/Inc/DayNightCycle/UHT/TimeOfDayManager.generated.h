// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeOfDayManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYNIGHTCYCLE_TimeOfDayManager_generated_h
#error "TimeOfDayManager.generated.h already included, missing '#pragma once' in TimeOfDayManager.h"
#endif
#define DAYNIGHTCYCLE_TimeOfDayManager_generated_h

#define FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeOfDayManager(); \
	friend struct Z_Construct_UClass_ATimeOfDayManager_Statics; \
public: \
	DECLARE_CLASS(ATimeOfDayManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DayNightCycle"), NO_API) \
	DECLARE_SERIALIZER(ATimeOfDayManager)


#define FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATimeOfDayManager(ATimeOfDayManager&&); \
	ATimeOfDayManager(const ATimeOfDayManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeOfDayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeOfDayManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeOfDayManager) \
	NO_API virtual ~ATimeOfDayManager();


#define FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_11_PROLOG
#define FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYNIGHTCYCLE_API UClass* StaticClass<class ATimeOfDayManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DayNightCycle_Source_DayNightCycle_TimeOfDayManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
