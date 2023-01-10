// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagStateMachine/Public/TagStateMachineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagStateMachineComponent() {}
// Cross Module References
	TAGSTATEMACHINE_API UClass* Z_Construct_UClass_UTagStateMachineComponent_NoRegister();
	TAGSTATEMACHINE_API UClass* Z_Construct_UClass_UTagStateMachineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TagStateMachine();
// End Cross Module References
	void UTagStateMachineComponent::StaticRegisterNativesUTagStateMachineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTagStateMachineComponent);
	UClass* Z_Construct_UClass_UTagStateMachineComponent_NoRegister()
	{
		return UTagStateMachineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTagStateMachineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTagStateMachineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TagStateMachine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTagStateMachineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TagStateMachineComponent.h" },
		{ "ModuleRelativePath", "Public/TagStateMachineComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTagStateMachineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTagStateMachineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTagStateMachineComponent_Statics::ClassParams = {
		&UTagStateMachineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTagStateMachineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTagStateMachineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTagStateMachineComponent()
	{
		if (!Z_Registration_Info_UClass_UTagStateMachineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTagStateMachineComponent.OuterSingleton, Z_Construct_UClass_UTagStateMachineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTagStateMachineComponent.OuterSingleton;
	}
	template<> TAGSTATEMACHINE_API UClass* StaticClass<UTagStateMachineComponent>()
	{
		return UTagStateMachineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTagStateMachineComponent);
	struct Z_CompiledInDeferFile_FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTagStateMachineComponent, UTagStateMachineComponent::StaticClass, TEXT("UTagStateMachineComponent"), &Z_Registration_Info_UClass_UTagStateMachineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTagStateMachineComponent), 1674507111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_1671640725(TEXT("/Script/TagStateMachine"),
		Z_CompiledInDeferFile_FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
