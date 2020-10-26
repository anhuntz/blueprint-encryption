// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTENCRYPTION_BlueprintEncryptionBPLibrary_generated_h
#error "BlueprintEncryptionBPLibrary.generated.h already included, missing '#pragma once' in BlueprintEncryptionBPLibrary.h"
#endif
#define BLUEPRINTENCRYPTION_BlueprintEncryptionBPLibrary_generated_h

#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecryptString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintEncryptionBPLibrary::DecryptString(Z_Param_InputString,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncryptString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintEncryptionBPLibrary::EncryptString(Z_Param_InputString,Z_Param_Key); \
		P_NATIVE_END; \
	}


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecryptString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintEncryptionBPLibrary::DecryptString(Z_Param_InputString,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncryptString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintEncryptionBPLibrary::EncryptString(Z_Param_InputString,Z_Param_Key); \
		P_NATIVE_END; \
	}


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEncryptionBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEncryptionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintEncryption"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEncryptionBPLibrary)


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEncryptionBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintEncryptionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEncryptionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintEncryption"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEncryptionBPLibrary)


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEncryptionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEncryptionBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEncryptionBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEncryptionBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEncryptionBPLibrary(UBlueprintEncryptionBPLibrary&&); \
	NO_API UBlueprintEncryptionBPLibrary(const UBlueprintEncryptionBPLibrary&); \
public:


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEncryptionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEncryptionBPLibrary(UBlueprintEncryptionBPLibrary&&); \
	NO_API UBlueprintEncryptionBPLibrary(const UBlueprintEncryptionBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEncryptionBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEncryptionBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEncryptionBPLibrary)


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_PRIVATE_PROPERTY_OFFSET
#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_6_PROLOG
#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_RPC_WRAPPERS \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_INCLASS \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_INCLASS_NO_PURE_DECLS \
	C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTENCRYPTION_API UClass* StaticClass<class UBlueprintEncryptionBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID C__Users_Aaron_Desktop_crypto_BlueprintEncryption_HostProject_Plugins_BlueprintEncryption_Source_BlueprintEncryption_Public_BlueprintEncryptionBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
