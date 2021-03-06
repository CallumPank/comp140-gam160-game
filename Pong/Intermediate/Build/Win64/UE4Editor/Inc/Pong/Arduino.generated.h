// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_Arduino_generated_h
#error "Arduino.generated.h already included, missing '#pragma once' in Arduino.h"
#endif
#define PONG_Arduino_generated_h

#define Pong_Source_Pong_Arduino_h_14_RPC_WRAPPERS
#define Pong_Source_Pong_Arduino_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_Arduino_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAArduino(); \
	friend PONG_API class UClass* Z_Construct_UClass_AArduino(); \
	public: \
	DECLARE_CLASS(AArduino, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(AArduino) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Arduino_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAArduino(); \
	friend PONG_API class UClass* Z_Construct_UClass_AArduino(); \
	public: \
	DECLARE_CLASS(AArduino, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(AArduino) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Arduino_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArduino(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArduino) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArduino); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArduino); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArduino(const AArduino& InCopy); \
public:


#define Pong_Source_Pong_Arduino_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArduino(const AArduino& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArduino); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArduino); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArduino)


#define Pong_Source_Pong_Arduino_h_11_PROLOG
#define Pong_Source_Pong_Arduino_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Arduino_h_14_RPC_WRAPPERS \
	Pong_Source_Pong_Arduino_h_14_INCLASS \
	Pong_Source_Pong_Arduino_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_Arduino_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Arduino_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_Arduino_h_14_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_Arduino_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_Arduino_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
