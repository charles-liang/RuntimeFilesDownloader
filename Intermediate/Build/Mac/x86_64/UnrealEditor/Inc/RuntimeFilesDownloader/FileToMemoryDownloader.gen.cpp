// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/FileToMemoryDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileToMemoryDownloader() {}
// Cross Module References
	RUNTIMEFILESDOWNLOADER_API UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult();
	UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToMemoryResult;
	static UEnum* EDownloadToMemoryResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, Z_Construct_UPackage__Script_RuntimeFilesDownloader(), TEXT("EDownloadToMemoryResult"));
		}
		return Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToMemoryResult>()
	{
		return EDownloadToMemoryResult_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators[] = {
		{ "EDownloadToMemoryResult::SuccessDownloading", (int64)EDownloadToMemoryResult::SuccessDownloading },
		{ "EDownloadToMemoryResult::DownloadFailed", (int64)EDownloadToMemoryResult::DownloadFailed },
		{ "EDownloadToMemoryResult::InvalidURL", (int64)EDownloadToMemoryResult::InvalidURL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "File To Memory Downloader" },
		{ "Comment", "/**\n* Possible results from a download request\n*/" },
		{ "DownloadFailed.Name", "EDownloadToMemoryResult::DownloadFailed" },
		{ "InvalidURL.Name", "EDownloadToMemoryResult::InvalidURL" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "SuccessDownloading.DisplayName", "Success" },
		{ "SuccessDownloading.Name", "EDownloadToMemoryResult::SuccessDownloading" },
		{ "ToolTip", "Possible results from a download request" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
		nullptr,
		"EDownloadToMemoryResult",
		"EDownloadToMemoryResult",
		Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton, Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms
		{
			TArray<uint8> DownloadedContent;
			EDownloadToMemoryResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownloadedContent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedContent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedContent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner = { "DownloadedContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent = { "DownloadedContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, DownloadedContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, METADATA_PARAMS(nullptr, 0) }; // 1233777663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download completion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFileToMemoryDownloader::execBP_DownloadFileToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileToMemoryDownloader::BP_DownloadFileToMemory(Z_Param_URL,Z_Param_Timeout,Z_Param_ContentType,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToMemoryDownloadComplete(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	void UFileToMemoryDownloader::StaticRegisterNativesUFileToMemoryDownloader()
	{
		UClass* Class = UFileToMemoryDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_DownloadFileToMemory", &UFileToMemoryDownloader::execBP_DownloadFileToMemory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics
	{
		struct FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms
		{
			FString URL;
			float Timeout;
			FString ContentType;
			FScriptDelegate OnProgress;
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData)) }; // 1317771800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData)) }; // 1997104000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "File To Memory Downloader|Main" },
		{ "Comment", "/**\n\x09 * Download the file and save it to the physical memory. Recommended for Blueprints only\n\x09 *\n\x09 * @param URL The file URL to be downloaded\n\x09 * @param Timeout Maximum waiting time in case of zero download progress, in seconds\n\x09 * @param ContentType The specified string will be set to the header in the Content-Type field. Enter MIME to specify the download file type\n\x09 * @param OnProgress Delegate broadcast on download progress\n\x09 * @param OnComplete Delegate broadcast on download complete\n\x09 */" },
		{ "DisplayName", "Download File To Memory" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Download the file and save it to the physical memory. Recommended for Blueprints only\n\n@param URL The file URL to be downloaded\n@param Timeout Maximum waiting time in case of zero download progress, in seconds\n@param ContentType The specified string will be set to the header in the Content-Type field. Enter MIME to specify the download file type\n@param OnProgress Delegate broadcast on download progress\n@param OnComplete Delegate broadcast on download complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileToMemoryDownloader, nullptr, "BP_DownloadFileToMemory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::FileToMemoryDownloader_eventBP_DownloadFileToMemory_Parms), Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileToMemoryDownloader);
	UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister()
	{
		return UFileToMemoryDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UFileToMemoryDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileToMemoryDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFilesDownloader,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileToMemoryDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileToMemoryDownloader_BP_DownloadFileToMemory, "BP_DownloadFileToMemory" }, // 2708828935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "File To Memory Downloader" },
		{ "Comment", "/**\n * Library for downloading files to memory. Downloads a file into RAM and outputs an array of bytes\n */" },
		{ "IncludePath", "FileToMemoryDownloader.h" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Library for downloading files to memory. Downloads a file into RAM and outputs an array of bytes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileToMemoryDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileToMemoryDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams = {
		&UFileToMemoryDownloader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileToMemoryDownloader()
	{
		if (!Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton, Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UFileToMemoryDownloader>()
	{
		return UFileToMemoryDownloader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileToMemoryDownloader);
	struct Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo[] = {
		{ EDownloadToMemoryResult_StaticEnum, TEXT("EDownloadToMemoryResult"), &Z_Registration_Info_UEnum_EDownloadToMemoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1233777663U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileToMemoryDownloader, UFileToMemoryDownloader::StaticClass, TEXT("UFileToMemoryDownloader"), &Z_Registration_Info_UClass_UFileToMemoryDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileToMemoryDownloader), 1403427886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_980384839(TEXT("/Script/RuntimeFilesDownloader"),
		Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_metachat_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
