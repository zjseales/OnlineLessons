// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaid/UnlockableDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockableDoor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CRYPTRAID_API UClass* Z_Construct_UClass_UUnlockableDoor();
	CRYPTRAID_API UClass* Z_Construct_UClass_UUnlockableDoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CryptRaid();
// End Cross Module References
	void UUnlockableDoor::StaticRegisterNativesUUnlockableDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnlockableDoor);
	UClass* Z_Construct_UClass_UUnlockableDoor_NoRegister()
	{
		return UUnlockableDoor::StaticClass();
	}
	struct Z_Construct_UClass_UUnlockableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnlockableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockableDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UnlockableDoor.h" },
		{ "ModuleRelativePath", "UnlockableDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockableDoor_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "UnlockableDoor" },
		{ "Comment", "// Offset position of the secret wall\n" },
		{ "ModuleRelativePath", "UnlockableDoor.h" },
		{ "ToolTip", "Offset position of the secret wall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnlockableDoor_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnlockableDoor, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UUnlockableDoor_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockableDoor_Statics::NewProp_TargetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnlockableDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockableDoor_Statics::NewProp_TargetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnlockableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnlockableDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnlockableDoor_Statics::ClassParams = {
		&UUnlockableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnlockableDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockableDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnlockableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnlockableDoor()
	{
		if (!Z_Registration_Info_UClass_UUnlockableDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnlockableDoor.OuterSingleton, Z_Construct_UClass_UUnlockableDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnlockableDoor.OuterSingleton;
	}
	template<> CRYPTRAID_API UClass* StaticClass<UUnlockableDoor>()
	{
		return UUnlockableDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnlockableDoor);
	UUnlockableDoor::~UUnlockableDoor() {}
	struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_UnlockableDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_UnlockableDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnlockableDoor, UUnlockableDoor::StaticClass, TEXT("UUnlockableDoor"), &Z_Registration_Info_UClass_UUnlockableDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnlockableDoor), 2590490809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_UnlockableDoor_h_1328405601(TEXT("/Script/CryptRaid"),
		Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_UnlockableDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_UnlockableDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
