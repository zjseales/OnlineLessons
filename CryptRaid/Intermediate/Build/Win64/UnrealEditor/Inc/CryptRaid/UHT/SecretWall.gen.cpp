// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/SecretWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecretWall() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRYPTRAID_API UClass* Z_Construct_UClass_USecretWall();
	CRYPTRAID_API UClass* Z_Construct_UClass_USecretWall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	void USecretWall::StaticRegisterNativesUSecretWall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecretWall);
	UClass* Z_Construct_UClass_USecretWall_NoRegister()
	{
		return USecretWall::StaticClass();
	}
	struct Z_Construct_UClass_USecretWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USecretWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecretWall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SecretWall.h" },
		{ "ModuleRelativePath", "SecretWall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecretWall_Statics::NewProp_MoveOffset_MetaData[] = {
		{ "Category", "SecretWall" },
		{ "Comment", "// Offset position of the secret wall\n" },
		{ "ModuleRelativePath", "SecretWall.h" },
		{ "ToolTip", "Offset position of the secret wall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecretWall_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USecretWall, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USecretWall_Statics::NewProp_MoveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecretWall_Statics::NewProp_MoveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecretWall_Statics::NewProp_MoveTime_MetaData[] = {
		{ "Category", "SecretWall" },
		{ "Comment", "// Time taken for the secret wall to move\n" },
		{ "ModuleRelativePath", "SecretWall.h" },
		{ "ToolTip", "Time taken for the secret wall to move" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecretWall_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USecretWall, MoveTime), METADATA_PARAMS(Z_Construct_UClass_USecretWall_Statics::NewProp_MoveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecretWall_Statics::NewProp_MoveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecretWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecretWall_Statics::NewProp_MoveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecretWall_Statics::NewProp_MoveTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USecretWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecretWall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USecretWall_Statics::ClassParams = {
		&USecretWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USecretWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USecretWall_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USecretWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USecretWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USecretWall()
	{
		if (!Z_Registration_Info_UClass_USecretWall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecretWall.OuterSingleton, Z_Construct_UClass_USecretWall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USecretWall.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<USecretWall>()
	{
		return USecretWall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USecretWall);
	USecretWall::~USecretWall() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_SecretWall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_SecretWall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USecretWall, USecretWall::StaticClass, TEXT("USecretWall"), &Z_Registration_Info_UClass_USecretWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecretWall), 2628515333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_SecretWall_h_2890839894(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_SecretWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_SecretWall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
