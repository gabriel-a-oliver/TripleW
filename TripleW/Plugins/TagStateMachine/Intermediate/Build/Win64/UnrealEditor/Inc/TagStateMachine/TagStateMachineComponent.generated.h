// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef TAGSTATEMACHINE_TagStateMachineComponent_generated_h
#error "TagStateMachineComponent.generated.h already included, missing '#pragma once' in TagStateMachineComponent.h"
#endif
#define TAGSTATEMACHINE_TagStateMachineComponent_generated_h

#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_10_DELEGATE \
struct _Script_TagStateMachine_eventStateChangedSignature_Parms \
{ \
	FGameplayTag NewStateTag; \
}; \
static inline void FStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& StateChangedSignature, FGameplayTag const& NewStateTag) \
{ \
	_Script_TagStateMachine_eventStateChangedSignature_Parms Parms; \
	Parms.NewStateTag=NewStateTag; \
	StateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_11_DELEGATE \
struct _Script_TagStateMachine_eventInitStateSignature_Parms \
{ \
	FGameplayTag StateTag; \
}; \
static inline void FInitStateSignature_DelegateWrapper(const FMulticastScriptDelegate& InitStateSignature, FGameplayTag const& StateTag) \
{ \
	_Script_TagStateMachine_eventInitStateSignature_Parms Parms; \
	Parms.StateTag=StateTag; \
	InitStateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_12_DELEGATE \
struct _Script_TagStateMachine_eventEndStateSignature_Parms \
{ \
	FGameplayTag StateTag; \
}; \
static inline void FEndStateSignature_DelegateWrapper(const FMulticastScriptDelegate& EndStateSignature, FGameplayTag const& StateTag) \
{ \
	_Script_TagStateMachine_eventEndStateSignature_Parms Parms; \
	Parms.StateTag=StateTag; \
	EndStateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_13_DELEGATE \
struct _Script_TagStateMachine_eventTickStateSignature_Parms \
{ \
	float DeltaTime; \
	FGameplayTag StateTag; \
}; \
static inline void FTickStateSignature_DelegateWrapper(const FMulticastScriptDelegate& TickStateSignature, float DeltaTime, FGameplayTag const& StateTag) \
{ \
	_Script_TagStateMachine_eventTickStateSignature_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	Parms.StateTag=StateTag; \
	TickStateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_SPARSE_DATA
#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchState);


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchState);


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTagStateMachineComponent(); \
	friend struct Z_Construct_UClass_UTagStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UTagStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TagStateMachine"), NO_API) \
	DECLARE_SERIALIZER(UTagStateMachineComponent)


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTagStateMachineComponent(); \
	friend struct Z_Construct_UClass_UTagStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UTagStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TagStateMachine"), NO_API) \
	DECLARE_SERIALIZER(UTagStateMachineComponent)


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTagStateMachineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTagStateMachineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTagStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTagStateMachineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTagStateMachineComponent(UTagStateMachineComponent&&); \
	NO_API UTagStateMachineComponent(const UTagStateMachineComponent&); \
public:


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTagStateMachineComponent(UTagStateMachineComponent&&); \
	NO_API UTagStateMachineComponent(const UTagStateMachineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTagStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTagStateMachineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTagStateMachineComponent)


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_15_PROLOG
#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_SPARSE_DATA \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_RPC_WRAPPERS \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_INCLASS \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_SPARSE_DATA \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAGSTATEMACHINE_API UClass* StaticClass<class UTagStateMachineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TripleW_Plugins_TagStateMachine_Source_TagStateMachine_Public_TagStateMachineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
