// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoDef/Public/MyLib.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GEODEF_API UClass* Z_Construct_UClass_UMyLib();
	GEODEF_API UClass* Z_Construct_UClass_UMyLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoDef();
// End Cross Module References
	DEFINE_FUNCTION(UMyLib::execRaycastFromCamera)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UMyLib::RaycastFromCamera(Z_Param_PlayerController,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	void UMyLib::StaticRegisterNativesUMyLib()
	{
		UClass* Class = UMyLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RaycastFromCamera", &UMyLib::execRaycastFromCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics
	{
		struct MyLib_eventRaycastFromCamera_Parms
		{
			const APlayerController* PlayerController;
			float MaxDistance;
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyLib_eventRaycastFromCamera_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_PlayerController_MetaData), Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_PlayerController_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyLib_eventRaycastFromCamera_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyLib_eventRaycastFromCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survivor Gameplay" },
		{ "ModuleRelativePath", "Public/MyLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyLib, nullptr, "RaycastFromCamera", nullptr, nullptr, Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::MyLib_eventRaycastFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::MyLib_eventRaycastFromCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyLib_RaycastFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyLib_RaycastFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyLib);
	UClass* Z_Construct_UClass_UMyLib_NoRegister()
	{
		return UMyLib::StaticClass();
	}
	struct Z_Construct_UClass_UMyLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoDef,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyLib_RaycastFromCamera, "RaycastFromCamera" }, // 2405946116
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyLib.h" },
		{ "ModuleRelativePath", "Public/MyLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyLib_Statics::ClassParams = {
		&UMyLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyLib()
	{
		if (!Z_Registration_Info_UClass_UMyLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyLib.OuterSingleton, Z_Construct_UClass_UMyLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyLib.OuterSingleton;
	}
	template<> GEODEF_API UClass* StaticClass<UMyLib>()
	{
		return UMyLib::StaticClass();
	}
	UMyLib::UMyLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLib);
	UMyLib::~UMyLib() {}
	struct Z_CompiledInDeferFile_FID_Users_ttdar_OneDrive_Documents_GitHub_GeoDef_GeoDef_Source_GeoDef_Public_MyLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ttdar_OneDrive_Documents_GitHub_GeoDef_GeoDef_Source_GeoDef_Public_MyLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyLib, UMyLib::StaticClass, TEXT("UMyLib"), &Z_Registration_Info_UClass_UMyLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyLib), 3227999162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ttdar_OneDrive_Documents_GitHub_GeoDef_GeoDef_Source_GeoDef_Public_MyLib_h_1236824337(TEXT("/Script/GeoDef"),
		Z_CompiledInDeferFile_FID_Users_ttdar_OneDrive_Documents_GitHub_GeoDef_GeoDef_Source_GeoDef_Public_MyLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ttdar_OneDrive_Documents_GitHub_GeoDef_GeoDef_Source_GeoDef_Public_MyLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
