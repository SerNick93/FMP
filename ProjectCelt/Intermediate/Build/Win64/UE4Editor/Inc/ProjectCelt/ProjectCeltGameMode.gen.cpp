// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCelt/ProjectCeltGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectCeltGameMode() {}
// Cross Module References
	PROJECTCELT_API UClass* Z_Construct_UClass_AProjectCeltGameMode_NoRegister();
	PROJECTCELT_API UClass* Z_Construct_UClass_AProjectCeltGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectCelt();
// End Cross Module References
	void AProjectCeltGameMode::StaticRegisterNativesAProjectCeltGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectCeltGameMode_NoRegister()
	{
		return AProjectCeltGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectCeltGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectCeltGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCelt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectCeltGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectCeltGameMode.h" },
		{ "ModuleRelativePath", "ProjectCeltGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectCeltGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectCeltGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectCeltGameMode_Statics::ClassParams = {
		&AProjectCeltGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectCeltGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectCeltGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectCeltGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectCeltGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectCeltGameMode, 3303974860);
	template<> PROJECTCELT_API UClass* StaticClass<AProjectCeltGameMode>()
	{
		return AProjectCeltGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectCeltGameMode(Z_Construct_UClass_AProjectCeltGameMode, &AProjectCeltGameMode::StaticClass, TEXT("/Script/ProjectCelt"), TEXT("AProjectCeltGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectCeltGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
