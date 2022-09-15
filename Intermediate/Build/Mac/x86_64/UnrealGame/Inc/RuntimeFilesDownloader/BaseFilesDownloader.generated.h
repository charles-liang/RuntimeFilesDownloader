// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h
#error "BaseFilesDownloader.generated.h already included, missing '#pragma once' in BaseFilesDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h

#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_10_DELEGATE \
struct _Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms \
{ \
	int32 BytesReceived; \
	int32 ContentLength; \
}; \
static inline void FOnDownloadProgress_DelegateWrapper(const FScriptDelegate& OnDownloadProgress, int32 BytesReceived, int32 ContentLength) \
{ \
	_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms Parms; \
	Parms.BytesReceived=BytesReceived; \
	Parms.ContentLength=ContentLength; \
	OnDownloadProgress.ProcessDelegate<UObject>(&Parms); \
}


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_SPARSE_DATA
#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToArray); \
	DECLARE_FUNCTION(execBytesToTexture); \
	DECLARE_FUNCTION(execBytesToString); \
	DECLARE_FUNCTION(execCancelDownload);


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToArray); \
	DECLARE_FUNCTION(execBytesToTexture); \
	DECLARE_FUNCTION(execBytesToString); \
	DECLARE_FUNCTION(execCancelDownload);


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFilesDownloader(); \
	friend struct Z_Construct_UClass_UBaseFilesDownloader_Statics; \
public: \
	DECLARE_CLASS(UBaseFilesDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UBaseFilesDownloader)


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBaseFilesDownloader(); \
	friend struct Z_Construct_UClass_UBaseFilesDownloader_Statics; \
public: \
	DECLARE_CLASS(UBaseFilesDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UBaseFilesDownloader)


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFilesDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFilesDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFilesDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFilesDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFilesDownloader(UBaseFilesDownloader&&); \
	NO_API UBaseFilesDownloader(const UBaseFilesDownloader&); \
public:


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFilesDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFilesDownloader(UBaseFilesDownloader&&); \
	NO_API UBaseFilesDownloader(const UBaseFilesDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFilesDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFilesDownloader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFilesDownloader)


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_19_PROLOG
#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_SPARSE_DATA \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_RPC_WRAPPERS \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_INCLASS \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_SPARSE_DATA \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_INCLASS_NO_PURE_DECLS \
	FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<class UBaseFilesDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
