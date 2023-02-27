// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/Grabber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	CRYPTRAID_API UClass* Z_Construct_UClass_UGrabber();
	CRYPTRAID_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	void UGrabber::StaticRegisterNativesUGrabber()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber);
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Grabber" },
		{ "Comment", "// Maximum distance that the player can reach and grab an object.\n" },
		{ "ModuleRelativePath", "Grabber.h" },
		{ "ToolTip", "Maximum distance that the player can reach and grab an object." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrabber, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
		&UGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber()
	{
		if (!Z_Registration_Info_UClass_UGrabber.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber.OuterSingleton, Z_Construct_UClass_UGrabber_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrabber.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UGrabber>()
	{
		return UGrabber::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
	UGrabber::~UGrabber() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Grabber_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Grabber_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber, UGrabber::StaticClass, TEXT("UGrabber"), &Z_Registration_Info_UClass_UGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber), 3310040045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Grabber_h_1547690166(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Grabber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_Grabber_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
