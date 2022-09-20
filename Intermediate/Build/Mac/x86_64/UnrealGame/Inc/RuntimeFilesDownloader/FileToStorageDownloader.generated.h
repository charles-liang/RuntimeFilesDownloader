// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDownloadToStorageResult : uint8;
 
class UFileToStorageDownloader;
#ifdef RUNTIMEFILESDOWNLOADER_FileToStorageDownloader_generated_h
#error "FileToStorageDownloader.generated.h already included, missing '#pragma once' in FileToStorageDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_FileToStorageDownloader_generated_h

#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_27_DELEGATE \
struct _Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms \
{ \
	EDownloadToStorageResult Result; \
}; \
static inline void FOnFileToStorageDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToStorageDownloadComplete, EDownloadToStorageResult Result) \
{ \
	_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms Parms; \
	Parms.Result=Result; \
	OnFileToStorageDownloadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_SPARSE_DATA
#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_DownloadFileToStorageWithHeader); \
	DECLARE_FUNCTION(execBP_DownloadFileToStorage);


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_DownloadFileToStorageWithHeader); \
	DECLARE_FUNCTION(execBP_DownloadFileToStorage);


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileToStorageDownloader(); \
	friend struct Z_Construct_UClass_UFileToStorageDownloader_Statics; \
public: \
	DECLARE_CLASS(UFileToStorageDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileToStorageDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUFileToStorageDownloader(); \
	friend struct Z_Construct_UClass_UFileToStorageDownloader_Statics; \
public: \
	DECLARE_CLASS(UFileToStorageDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileToStorageDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToStorageDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileToStorageDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToStorageDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToStorageDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileToStorageDownloader(UFileToStorageDownloader&&); \
	NO_API UFileToStorageDownloader(const UFileToStorageDownloader&); \
public:


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToStorageDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileToStorageDownloader(UFileToStorageDownloader&&); \
	NO_API UFileToStorageDownloader(const UFileToStorageDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToStorageDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToStorageDownloader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileToStorageDownloader)


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_32_PROLOG
#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_SPARSE_DATA \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_RPC_WRAPPERS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_INCLASS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_SPARSE_DATA \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_INCLASS_NO_PURE_DECLS \
	FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<class UFileToStorageDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h


#define FOREACH_ENUM_EDOWNLOADTOSTORAGERESULT(op) \
	op(EDownloadToStorageResult::SuccessDownloading) \
	op(EDownloadToStorageResult::DownloadFailed) \
	op(EDownloadToStorageResult::SaveFailed) \
	op(EDownloadToStorageResult::DirectoryCreationFailed) \
	op(EDownloadToStorageResult::InvalidURL) \
	op(EDownloadToStorageResult::InvalidSavePath) 

enum class EDownloadToStorageResult : uint8;
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToStorageResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
