// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/GargoyleTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGargoyleTrigger() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_UGargoyleTrigger();
	CRYPTRAID_API UClass* Z_Construct_UClass_UGargoyleTrigger_NoRegister();
	CRYPTRAID_API UClass* Z_Construct_UClass_UUnlockableDoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	DEFINE_FUNCTION(UGargoyleTrigger::execSetMover)
	{
		P_GET_OBJECT(UUnlockableDoor,Z_Param_NewMover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMover(Z_Param_NewMover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGargoyleTrigger::execUnlockDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockDoor();
		P_NATIVE_END;
	}
	void UGargoyleTrigger::StaticRegisterNativesUGargoyleTrigger()
	{
		UClass* Class = UGargoyleTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMover", &UGargoyleTrigger::execSetMover },
			{ "UnlockDoor", &UGargoyleTrigger::execUnlockDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics
	{
		struct GargoyleTrigger_eventSetMover_Parms
		{
			UUnlockableDoor* NewMover;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMover_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::NewProp_NewMover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::NewProp_NewMover = { "NewMover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GargoyleTrigger_eventSetMover_Parms, NewMover), Z_Construct_UClass_UUnlockableDoor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::NewProp_NewMover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::NewProp_NewMover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::NewProp_NewMover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GargoyleTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGargoyleTrigger, nullptr, "SetMover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::GargoyleTrigger_eventSetMover_Parms), Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGargoyleTrigger_SetMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGargoyleTrigger_SetMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GargoyleTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGargoyleTrigger, nullptr, "UnlockDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGargoyleTrigger);
	UClass* Z_Construct_UClass_UGargoyleTrigger_NoRegister()
	{
		return UGargoyleTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UGargoyleTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGargoyleTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGargoyleTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGargoyleTrigger_SetMover, "SetMover" }, // 2506195184
		{ &Z_Construct_UFunction_UGargoyleTrigger_UnlockDoor, "UnlockDoor" }, // 3113979572
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGargoyleTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "GargoyleTrigger.h" },
		{ "ModuleRelativePath", "GargoyleTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGargoyleTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGargoyleTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGargoyleTrigger_Statics::ClassParams = {
		&UGargoyleTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGargoyleTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGargoyleTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGargoyleTrigger()
	{
		if (!Z_Registration_Info_UClass_UGargoyleTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGargoyleTrigger.OuterSingleton, Z_Construct_UClass_UGargoyleTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGargoyleTrigger.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UGargoyleTrigger>()
	{
		return UGargoyleTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGargoyleTrigger);
	UGargoyleTrigger::~UGargoyleTrigger() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_GargoyleTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_GargoyleTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGargoyleTrigger, UGargoyleTrigger::StaticClass, TEXT("UGargoyleTrigger"), &Z_Registration_Info_UClass_UGargoyleTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGargoyleTrigger), 933535191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_GargoyleTrigger_h_2498284977(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_GargoyleTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_GargoyleTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
