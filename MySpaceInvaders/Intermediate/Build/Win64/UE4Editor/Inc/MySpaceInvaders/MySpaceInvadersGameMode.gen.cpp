// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySpaceInvaders/MySpaceInvadersGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySpaceInvadersGameMode() {}
// Cross Module References
	MYSPACEINVADERS_API UClass* Z_Construct_UClass_AMySpaceInvadersGameMode_NoRegister();
	MYSPACEINVADERS_API UClass* Z_Construct_UClass_AMySpaceInvadersGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MySpaceInvaders();
// End Cross Module References
	void AMySpaceInvadersGameMode::StaticRegisterNativesAMySpaceInvadersGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMySpaceInvadersGameMode_NoRegister()
	{
		return AMySpaceInvadersGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMySpaceInvadersGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MySpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MySpaceInvadersGameMode.h" },
		{ "ModuleRelativePath", "MySpaceInvadersGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of MySpaceInvadersCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySpaceInvadersGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::ClassParams = {
		&AMySpaceInvadersGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMySpaceInvadersGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMySpaceInvadersGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMySpaceInvadersGameMode, 2070737319);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMySpaceInvadersGameMode(Z_Construct_UClass_AMySpaceInvadersGameMode, &AMySpaceInvadersGameMode::StaticClass, TEXT("/Script/MySpaceInvaders"), TEXT("AMySpaceInvadersGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySpaceInvadersGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
