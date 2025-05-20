// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingWithGuraUE/Public/SettingsMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsMenuWidget() {}

// Begin Cross Module References
SINGWITHGURAUE_API UClass* Z_Construct_UClass_USettingsMenuWidget();
SINGWITHGURAUE_API UClass* Z_Construct_UClass_USettingsMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SingWithGuraUE();
// End Cross Module References

// Begin Class USettingsMenuWidget
void USettingsMenuWidget::StaticRegisterNativesUSettingsMenuWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsMenuWidget);
UClass* Z_Construct_UClass_USettingsMenuWidget_NoRegister()
{
	return USettingsMenuWidget::StaticClass();
}
struct Z_Construct_UClass_USettingsMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SettingsMenuWidget.h" },
		{ "ModuleRelativePath", "Public/SettingsMenuWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SingWithGuraUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsMenuWidget_Statics::ClassParams = {
	&USettingsMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsMenuWidget()
{
	if (!Z_Registration_Info_UClass_USettingsMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsMenuWidget.OuterSingleton, Z_Construct_UClass_USettingsMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsMenuWidget.OuterSingleton;
}
template<> SINGWITHGURAUE_API UClass* StaticClass<USettingsMenuWidget>()
{
	return USettingsMenuWidget::StaticClass();
}
USettingsMenuWidget::USettingsMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsMenuWidget);
USettingsMenuWidget::~USettingsMenuWidget() {}
// End Class USettingsMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_redmi_Documents_Unreal_Projects_SingWithGuraUE_Source_SingWithGuraUE_Public_SettingsMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsMenuWidget, USettingsMenuWidget::StaticClass, TEXT("USettingsMenuWidget"), &Z_Registration_Info_UClass_USettingsMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsMenuWidget), 3666985320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redmi_Documents_Unreal_Projects_SingWithGuraUE_Source_SingWithGuraUE_Public_SettingsMenuWidget_h_511556105(TEXT("/Script/SingWithGuraUE"),
	Z_CompiledInDeferFile_FID_Users_redmi_Documents_Unreal_Projects_SingWithGuraUE_Source_SingWithGuraUE_Public_SettingsMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redmi_Documents_Unreal_Projects_SingWithGuraUE_Source_SingWithGuraUE_Public_SettingsMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
