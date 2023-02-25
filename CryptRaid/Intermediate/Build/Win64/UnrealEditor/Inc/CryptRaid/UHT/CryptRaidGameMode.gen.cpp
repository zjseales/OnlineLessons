// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/CryptRaidGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRaidGameMode() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_ACryptRaidGameMode();
	CRYPTRAID_API UClass* Z_Construct_UClass_ACryptRaidGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	void ACryptRaidGameMode::StaticRegisterNativesACryptRaidGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRaidGameMode);
	UClass* Z_Construct_UClass_ACryptRaidGameMode_NoRegister()
	{
		return ACryptRaidGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACryptRaidGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptRaidGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaidGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CryptRaidGameMode.h" },
		{ "ModuleRelativePath", "CryptRaidGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptRaidGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRaidGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRaidGameMode_Statics::ClassParams = {
		&ACryptRaidGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACryptRaidGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaidGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACryptRaidGameMode()
	{
		if (!Z_Registration_Info_UClass_ACryptRaidGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRaidGameMode.OuterSingleton, Z_Construct_UClass_ACryptRaidGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptRaidGameMode.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<ACryptRaidGameMode>()
	{
		return ACryptRaidGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRaidGameMode);
	ACryptRaidGameMode::~ACryptRaidGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRaidGameMode, ACryptRaidGameMode::StaticClass, TEXT("ACryptRaidGameMode"), &Z_Registration_Info_UClass_ACryptRaidGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRaidGameMode), 2424309931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidGameMode_h_2976117728(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
