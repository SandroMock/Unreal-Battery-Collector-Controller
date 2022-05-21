// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define BATTERYCOLLECTOR_Pickup_generated_h

#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_SPARSE_DATA
#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_RPC_WRAPPERS \
	virtual void IsCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCollected); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCollected); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_EVENT_PARMS
#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_CALLBACK_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(APickup, PickupMesh); }


#define BatteryCollector_Source_BatteryCollector_Pickup_h_9_PROLOG \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_EVENT_PARMS


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_INCLASS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
