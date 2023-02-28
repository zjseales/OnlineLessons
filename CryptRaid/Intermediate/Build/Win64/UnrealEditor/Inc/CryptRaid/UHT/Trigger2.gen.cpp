// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/Trigger2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrigger2() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_USecretWall_NoRegister();
	CRYPTRAID_API UClass* Z_Construct_UClass_UTrigger2();
	CRYPTRAID_API UClass* Z_Construct_UClass_UTrigger2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	DEFINE_FUNCTION(UTrigger2::execSetMover)
	{
		P_GET_OBJECT(USecretWall,Z_Param_NewMover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMover(Z_Param_NewMover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrigger2::execUnlockDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockDoor();
		P_NATIVE_END;
	}
	void UTrigger2::StaticRegisterNativesUTrigger2()
	{
		UClass* Class = UTrigger2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMover", &UTrigger2::execSetMover },
			{ "UnlockDoor", &UTrigger2::execUnlockDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrigger2_SetMover_Statics
	{
		struct Trigger2_eventSetMover_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrigger2_SetMover_Statics::NewProp_NewMover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrigger2_SetMover_Statics::NewProp_NewMover = { "NewMover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Trigger2_eventSetMover_Parms, NewMover), Z_Construct_UClass_USecretWall_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTrigger2_SetMover_Statics::NewProp_NewMover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrigger2_SetMover_Statics::NewProp_NewMover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrigger2_SetMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrigger2_SetMover_Statics::NewProp_NewMover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrigger2_SetMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrigger2_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrigger2, nullptr, "SetMover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTrigger2_SetMover_Statics::Trigger2_eventSetMover_Parms), Z_Construct_UFunction_UTrigger2_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrigger2_SetMover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrigger2_SetMover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrigger2_SetMover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrigger2_SetMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrigger2_SetMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrigger2, nullptr, "UnlockDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrigger2_UnlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrigger2_UnlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrigger2);
	UClass* Z_Construct_UClass_UTrigger2_NoRegister()
	{
		return UTrigger2::StaticClass();
	}
	struct Z_Construct_UClass_UTrigger2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrigger2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrigger2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrigger2_SetMover, "SetMover" }, // 1378286391
		{ &Z_Construct_UFunction_UTrigger2_UnlockDoor, "UnlockDoor" }, // 2090460619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrigger2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Trigger2.h" },
		{ "ModuleRelativePath", "Trigger2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrigger2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrigger2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrigger2_Statics::ClassParams = {
		&UTrigger2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTrigger2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrigger2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrigger2()
	{
		if (!Z_Registration_Info_UClass_UTrigger2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrigger2.OuterSingleton, Z_Construct_UClass_UTrigger2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrigger2.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UTrigger2>()
	{
		return UTrigger2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrigger2);
	UTrigger2::~UTrigger2() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Trigger2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Trigger2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrigger2, UTrigger2::StaticClass, TEXT("UTrigger2"), &Z_Registration_Info_UClass_UTrigger2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrigger2), 3936361516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Trigger2_h_4262874795(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Trigger2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Trigger2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
