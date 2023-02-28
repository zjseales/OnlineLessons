// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/TriggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_USecretWall_NoRegister();
	CRYPTRAID_API UClass* Z_Construct_UClass_UTriggerComponent();
	CRYPTRAID_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerComponent::execSetMover)
	{
		P_GET_OBJECT(USecretWall,Z_Param_NewMover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMover(Z_Param_NewMover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerComponent::execUnlockDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockDoor();
		P_NATIVE_END;
	}
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
		UClass* Class = UTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMover", &UTriggerComponent::execSetMover },
			{ "UnlockDoor", &UTriggerComponent::execUnlockDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerComponent_SetMover_Statics
	{
		struct TriggerComponent_eventSetMover_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_NewMover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_NewMover = { "NewMover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerComponent_eventSetMover_Parms, NewMover), Z_Construct_UClass_USecretWall_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_NewMover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_NewMover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::NewProp_NewMover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerComponent, nullptr, "SetMover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::TriggerComponent_eventSetMover_Parms), Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerComponent_SetMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerComponent_SetMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerComponent, nullptr, "UnlockDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerComponent_UnlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerComponent_UnlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerComponent);
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerComponent_SetMover, "SetMover" }, // 1693476667
		{ &Z_Construct_UFunction_UTriggerComponent_UnlockDoor, "UnlockDoor" }, // 1419155826
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UTriggerComponent>()
	{
		return UTriggerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
	UTriggerComponent::~UTriggerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_TriggerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_TriggerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 450519829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_TriggerComponent_h_2244832311(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_TriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_TriggerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
