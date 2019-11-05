// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "throwback/Public/changeMass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodechangeMass() {}
// Cross Module References
	THROWBACK_API UClass* Z_Construct_UClass_UchangeMass_NoRegister();
	THROWBACK_API UClass* Z_Construct_UClass_UchangeMass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_throwback();
// End Cross Module References
	void UchangeMass::StaticRegisterNativesUchangeMass()
	{
	}
	UClass* Z_Construct_UClass_UchangeMass_NoRegister()
	{
		return UchangeMass::StaticClass();
	}
	struct Z_Construct_UClass_UchangeMass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UchangeMass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_throwback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UchangeMass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "changeMass.h" },
		{ "ModuleRelativePath", "Public/changeMass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UchangeMass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UchangeMass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UchangeMass_Statics::ClassParams = {
		&UchangeMass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UchangeMass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UchangeMass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UchangeMass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UchangeMass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UchangeMass, 4269680085);
	template<> THROWBACK_API UClass* StaticClass<UchangeMass>()
	{
		return UchangeMass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UchangeMass(Z_Construct_UClass_UchangeMass, &UchangeMass::StaticClass, TEXT("/Script/throwback"), TEXT("UchangeMass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UchangeMass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
