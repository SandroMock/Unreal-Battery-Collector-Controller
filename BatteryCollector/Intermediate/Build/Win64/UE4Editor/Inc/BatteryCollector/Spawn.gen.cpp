// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Spawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawn() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawn_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawn::execGetRandomPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPosition();
		P_NATIVE_END;
	}
	void ASpawn::StaticRegisterNativesASpawn()
	{
		UClass* Class = ASpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPosition", &ASpawn::execGetRandomPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics
	{
		struct Spawn_eventGetRandomPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spawn_eventGetRandomPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn, nullptr, "GetRandomPosition", nullptr, nullptr, sizeof(Spawn_eventGetRandomPosition_Parms), Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawn_GetRandomPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawn_GetRandomPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawn_NoRegister()
	{
		return ASpawn::StaticClass();
	}
	struct Z_Construct_UClass_ASpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhatToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WhatToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhereToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhereToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawn_GetRandomPosition, "GetRandomPosition" }, // 4038517147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawn.h" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Statics::NewProp_WhatToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawn_Statics::NewProp_WhatToSpawn = { "WhatToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn, WhatToSpawn), Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawn_Statics::NewProp_WhatToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::NewProp_WhatToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Statics::NewProp_MinDelay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawn_Statics::NewProp_MinDelay = { "MinDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn, MinDelay), METADATA_PARAMS(Z_Construct_UClass_ASpawn_Statics::NewProp_MinDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::NewProp_MinDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Statics::NewProp_MaxDelay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawn_Statics::NewProp_MaxDelay = { "MaxDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn, MaxDelay), METADATA_PARAMS(Z_Construct_UClass_ASpawn_Statics::NewProp_MaxDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::NewProp_MaxDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Statics::NewProp_WhereToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawn_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawn_Statics::NewProp_WhereToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::NewProp_WhereToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Statics::NewProp_WhatToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Statics::NewProp_MinDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Statics::NewProp_MaxDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Statics::NewProp_WhereToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawn_Statics::ClassParams = {
		&ASpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawn, 2449680130);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ASpawn>()
	{
		return ASpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawn(Z_Construct_UClass_ASpawn, &ASpawn::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ASpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
