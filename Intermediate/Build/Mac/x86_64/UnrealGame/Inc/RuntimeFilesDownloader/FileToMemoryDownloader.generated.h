// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDownloadToMemoryResult : uint8;
#ifdef RUNTIMEFILESDOWNLOADER_FileToMemoryDownloader_generated_h
#error "FileToMemoryDownloader.generated.h already included, missing '#pragma once' in FileToMemoryDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_FileToMemoryDownloader_generated_h

#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_25_DELEGATE \
struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms \
{ \
	TArray<uint8> DownloadedContent; \
	EDownloadToMemoryResult Result; \
}; \
static inline void FOnFileToMemoryDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryDownloadComplete, TArray<uint8> const& DownloadedContent, EDownloadToMemoryResult Result) \
{ \
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms Parms; \
	Parms.DownloadedContent=DownloadedContent; \
	Parms.Result=Result; \
	OnFileToMemoryDownloadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_SPARSE_DATA
#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_DownloadFileToMemory);


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_DownloadFileToMemory);


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileToMemoryDownloader(); \
	friend struct Z_Construct_UClass_UFileToMemoryDownloader_Statics; \
public: \
	DECLARE_CLASS(UFileToMemoryDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileToMemoryDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFileToMemoryDownloader(); \
	friend struct Z_Construct_UClass_UFileToMemoryDownloader_Statics; \
public: \
	DECLARE_CLASS(UFileToMemoryDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileToMemoryDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToMemoryDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileToMemoryDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToMemoryDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToMemoryDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileToMemoryDownloader(UFileToMemoryDownloader&&); \
	NO_API UFileToMemoryDownloader(const UFileToMemoryDownloader&); \
public:


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToMemoryDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileToMemoryDownloader(UFileToMemoryDownloader&&); \
	NO_API UFileToMemoryDownloader(const UFileToMemoryDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToMemoryDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToMemoryDownloader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileToMemoryDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_30_PROLOG
#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_SPARSE_DATA \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_RPC_WRAPPERS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_INCLASS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_SPARSE_DATA \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_INCLASS_NO_PURE_DECLS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<class UFileToMemoryDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h


#define FOREACH_ENUM_EDOWNLOADTOMEMORYRESULT(op) \
	op(EDownloadToMemoryResult::SuccessDownloading) \
	op(EDownloadToMemoryResult::DownloadFailed) \
	op(EDownloadToMemoryResult::InvalidURL) 

enum class EDownloadToMemoryResult : uint8;
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToMemoryResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
