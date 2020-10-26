// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintEncryption/Public/BlueprintEncryptionBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEncryptionBPLibrary() {}
// Cross Module References
	BLUEPRINTENCRYPTION_API UClass* Z_Construct_UClass_UBlueprintEncryptionBPLibrary_NoRegister();
	BLUEPRINTENCRYPTION_API UClass* Z_Construct_UClass_UBlueprintEncryptionBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueprintEncryption();
	BLUEPRINTENCRYPTION_API UFunction* Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString();
	BLUEPRINTENCRYPTION_API UFunction* Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString();
// End Cross Module References
	void UBlueprintEncryptionBPLibrary::StaticRegisterNativesUBlueprintEncryptionBPLibrary()
	{
		UClass* Class = UBlueprintEncryptionBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecryptString", &UBlueprintEncryptionBPLibrary::execDecryptString },
			{ "EncryptString", &UBlueprintEncryptionBPLibrary::execEncryptString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics
	{
		struct BlueprintEncryptionBPLibrary_eventDecryptString_Parms
		{
			FString InputString;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventDecryptString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventDecryptString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventDecryptString_Parms, InputString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::NewProp_InputString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|Encryption" },
		{ "ModuleRelativePath", "Public/BlueprintEncryptionBPLibrary.h" },
		{ "ToolTip", "Decrypts string using key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEncryptionBPLibrary, nullptr, "DecryptString", sizeof(BlueprintEncryptionBPLibrary_eventDecryptString_Parms), Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics
	{
		struct BlueprintEncryptionBPLibrary_eventEncryptString_Parms
		{
			FString InputString;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventEncryptString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintEncryptionBPLibrary_eventEncryptString_Parms, InputString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::NewProp_InputString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|Encryption" },
		{ "ModuleRelativePath", "Public/BlueprintEncryptionBPLibrary.h" },
		{ "ToolTip", "Encrypts string using key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEncryptionBPLibrary, nullptr, "EncryptString", sizeof(BlueprintEncryptionBPLibrary_eventEncryptString_Parms), Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintEncryptionBPLibrary_NoRegister()
	{
		return UBlueprintEncryptionBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintEncryption,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_DecryptString, "DecryptString" }, // 497155866
		{ &Z_Construct_UFunction_UBlueprintEncryptionBPLibrary_EncryptString, "EncryptString" }, // 3830588993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEncryptionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintEncryptionBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEncryptionBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::ClassParams = {
		&UBlueprintEncryptionBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEncryptionBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintEncryptionBPLibrary, 627386773);
	template<> BLUEPRINTENCRYPTION_API UClass* StaticClass<UBlueprintEncryptionBPLibrary>()
	{
		return UBlueprintEncryptionBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintEncryptionBPLibrary(Z_Construct_UClass_UBlueprintEncryptionBPLibrary, &UBlueprintEncryptionBPLibrary::StaticClass, TEXT("/Script/BlueprintEncryption"), TEXT("UBlueprintEncryptionBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEncryptionBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
