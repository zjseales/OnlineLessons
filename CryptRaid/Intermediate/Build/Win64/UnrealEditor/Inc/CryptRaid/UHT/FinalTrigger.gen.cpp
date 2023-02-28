// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/FinalTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalTrigger() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_UFinalTrigger();
	CRYPTRAID_API UClass* Z_Construct_UClass_UFinalTrigger_NoRegister();
	CRYPTRAID_API UClass* Z_Construct_UClass_USecretWall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	DEFINE_FUNCTION(UFinalTrigger::execSetMover)
	{
		P_GET_OBJECT(USecretWall,Z_Param_NewMover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMover(Z_Param_NewMover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFinalTrigger::execCloseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFinalTrigger::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	void UFinalTrigger::StaticRegisterNativesUFinalTrigger()
	{
		UClass* Class = UFinalTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &UFinalTrigger::execCloseDoor },
			{ "OpenDoor", &UFinalTrigger::execOpenDoor },
			{ "SetMover", &UFinalTrigger::execSetMover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FinalTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinalTrigger, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFinalTrigger_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinalTrigger_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FinalTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinalTrigger, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFinalTrigger_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinalTrigger_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFinalTrigger_SetMover_Statics
	{
		struct FinalTrigger_eventSetMover_Parms
		{
			USecretWall* NewMover;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::NewProp_NewMover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::NewProp_NewMover = { "NewMover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FinalTrigger_eventSetMover_Parms, NewMover), Z_Construct_UClass_USecretWall_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::NewProp_NewMover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::NewProp_NewMover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::NewProp_NewMover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FinalTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinalTrigger, nullptr, "SetMover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::FinalTrigger_eventSetMover_Parms), Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFinalTrigger_SetMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinalTrigger_SetMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFinalTrigger);
	UClass* Z_Construct_UClass_UFinalTrigger_NoRegister()
	{
		return UFinalTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UFinalTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFinalTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFinalTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFinalTrigger_CloseDoor, "CloseDoor" }, // 1942097432
		{ &Z_Construct_UFunction_UFinalTrigger_OpenDoor, "OpenDoor" }, // 1534108490
		{ &Z_Construct_UFunction_UFinalTrigger_SetMover, "SetMover" }, // 3014992138
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFinalTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "FinalTrigger.h" },
		{ "ModuleRelativePath", "FinalTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFinalTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFinalTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFinalTrigger_Statics::ClassParams = {
		&UFinalTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFinalTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFinalTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFinalTrigger()
	{
		if (!Z_Registration_Info_UClass_UFinalTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFinalTrigger.OuterSingleton, Z_Construct_UClass_UFinalTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFinalTrigger.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UFinalTrigger>()
	{
		return UFinalTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFinalTrigger);
	UFinalTrigger::~UFinalTrigger() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_FinalTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_FinalTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFinalTrigger, UFinalTrigger::StaticClass, TEXT("UFinalTrigger"), &Z_Registration_Info_UClass_UFinalTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFinalTrigger), 352450123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_FinalTrigger_h_873168416(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_FinalTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_FinalTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
