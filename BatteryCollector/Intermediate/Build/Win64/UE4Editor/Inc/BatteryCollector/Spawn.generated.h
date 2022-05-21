// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BATTERYCOLLECTOR_Spawn_generated_h
#error "Spawn.generated.h already included, missing '#pragma once' in Spawn.h"
#endif
#define BATTERYCOLLECTOR_Spawn_generated_h

#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_SPARSE_DATA
#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPosition);


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPosition);


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawn(); \
	friend struct Z_Construct_UClass_ASpawn_Statics; \
public: \
	DECLARE_CLASS(ASpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawn)


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpawn(); \
	friend struct Z_Construct_UClass_ASpawn_Statics; \
public: \
	DECLARE_CLASS(ASpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawn)


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn(ASpawn&&); \
	NO_API ASpawn(const ASpawn&); \
public:


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn(ASpawn&&); \
	NO_API ASpawn(const ASpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawn)


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhatToSpawn() { return STRUCT_OFFSET(ASpawn, WhatToSpawn); } \
	FORCEINLINE static uint32 __PPO__MinDelay() { return STRUCT_OFFSET(ASpawn, MinDelay); } \
	FORCEINLINE static uint32 __PPO__MaxDelay() { return STRUCT_OFFSET(ASpawn, MaxDelay); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(ASpawn, WhereToSpawn); }


#define BatteryCollector_Source_BatteryCollector_Spawn_h_10_PROLOG
#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_INCLASS \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_Spawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Spawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ASpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_Spawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
