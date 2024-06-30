// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraCharacterBase
void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacterBase);
UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
{
	return AAuraCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AAuraCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Public/AuraCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
	&AAuraCharacterBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraCharacterBase()
{
	if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraCharacterBase>()
{
	return AAuraCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
AAuraCharacterBase::~AAuraCharacterBase() {}
// End Class AAuraCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAScourse_Aura_Source_Aura_Public_AuraCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 4025611961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAScourse_Aura_Source_Aura_Public_AuraCharacterBase_h_1569431936(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_GAScourse_Aura_Source_Aura_Public_AuraCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAScourse_Aura_Source_Aura_Public_AuraCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
