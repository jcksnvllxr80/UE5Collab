// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Collab/UE5CollabGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5CollabGameModeBase() {}
// Cross Module References
	UE5COLLAB_API UClass* Z_Construct_UClass_AUE5CollabGameModeBase_NoRegister();
	UE5COLLAB_API UClass* Z_Construct_UClass_AUE5CollabGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5Collab();
// End Cross Module References
	void AUE5CollabGameModeBase::StaticRegisterNativesAUE5CollabGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5CollabGameModeBase);
	UClass* Z_Construct_UClass_AUE5CollabGameModeBase_NoRegister()
	{
		return AUE5CollabGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5CollabGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5CollabGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Collab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5CollabGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5CollabGameModeBase.h" },
		{ "ModuleRelativePath", "UE5CollabGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5CollabGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5CollabGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5CollabGameModeBase_Statics::ClassParams = {
		&AUE5CollabGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5CollabGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5CollabGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5CollabGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5CollabGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5CollabGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5CollabGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5CollabGameModeBase.OuterSingleton;
	}
	template<> UE5COLLAB_API UClass* StaticClass<AUE5CollabGameModeBase>()
	{
		return AUE5CollabGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5CollabGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5Collab_Source_UE5Collab_UE5CollabGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Collab_Source_UE5Collab_UE5CollabGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5CollabGameModeBase, AUE5CollabGameModeBase::StaticClass, TEXT("AUE5CollabGameModeBase"), &Z_Registration_Info_UClass_AUE5CollabGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5CollabGameModeBase), 1109579866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Collab_Source_UE5Collab_UE5CollabGameModeBase_h_501633208(TEXT("/Script/UE5Collab"),
		Z_CompiledInDeferFile_FID_UE5Collab_Source_UE5Collab_UE5CollabGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Collab_Source_UE5Collab_UE5CollabGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
