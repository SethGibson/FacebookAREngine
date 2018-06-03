// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FBAREngineRootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBAREngineRootActor() {}
// Cross Module References
	FACEBOOKARENGINE_API UClass* Z_Construct_UClass_AFBAREngineRootActor_NoRegister();
	FACEBOOKARENGINE_API UClass* Z_Construct_UClass_AFBAREngineRootActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FacebookAREngine();
// End Cross Module References
	void AFBAREngineRootActor::StaticRegisterNativesAFBAREngineRootActor()
	{
	}
	UClass* Z_Construct_UClass_AFBAREngineRootActor_NoRegister()
	{
		return AFBAREngineRootActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AFBAREngineRootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FacebookAREngine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FBAREngineRootActor.h" },
				{ "ModuleRelativePath", "Public/FBAREngineRootActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFBAREngineRootActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFBAREngineRootActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBAREngineRootActor, 3916961810);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBAREngineRootActor(Z_Construct_UClass_AFBAREngineRootActor, &AFBAREngineRootActor::StaticClass, TEXT("/Script/FacebookAREngine"), TEXT("AFBAREngineRootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBAREngineRootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
