// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/BaseFilesDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFilesDownloader() {}
// Cross Module References
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms
		{
			int32 BytesReceived;
			int32 ContentLength;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms, ContentLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ContentLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download progress */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnDownloadProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execSaveStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::SaveStringToFile(Z_Param_String,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execLoadFileToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::LoadFileToString(Z_Param_Out_Result,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execSaveArrayToFile)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::SaveArrayToFile(Z_Param_Out_Bytes,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execLoadFileToArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::LoadFileToArray(Z_Param_Out_Result,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execBytesToTexture)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UBaseFilesDownloader::BytesToTexture(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBaseFilesDownloader::BytesToString(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execCancelDownload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelDownload();
		P_NATIVE_END;
	}
	void UBaseFilesDownloader::StaticRegisterNativesUBaseFilesDownloader()
	{
		UClass* Class = UBaseFilesDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToString", &UBaseFilesDownloader::execBytesToString },
			{ "BytesToTexture", &UBaseFilesDownloader::execBytesToTexture },
			{ "CancelDownload", &UBaseFilesDownloader::execCancelDownload },
			{ "LoadFileToArray", &UBaseFilesDownloader::execLoadFileToArray },
			{ "LoadFileToString", &UBaseFilesDownloader::execLoadFileToString },
			{ "SaveArrayToFile", &UBaseFilesDownloader::execSaveArrayToFile },
			{ "SaveStringToFile", &UBaseFilesDownloader::execSaveStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics
	{
		struct BaseFilesDownloader_eventBytesToString_Parms
		{
			TArray<uint8> Bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToString_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Convert bytes to string\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Convert bytes to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::BaseFilesDownloader_eventBytesToString_Parms), Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics
	{
		struct BaseFilesDownloader_eventBytesToTexture_Parms
		{
			TArray<uint8> Bytes;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToTexture_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Convert bytes to texture\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Convert bytes to texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "BytesToTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::BaseFilesDownloader_eventBytesToTexture_Parms), Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics
	{
		struct BaseFilesDownloader_eventCancelDownload_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventCancelDownload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFilesDownloader_eventCancelDownload_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Main" },
		{ "Comment", "/**\n\x09 * Canceling the current download\n\x09 *\n\x09 * @return Whether the cancellation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Canceling the current download\n\n@return Whether the cancellation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "CancelDownload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::BaseFilesDownloader_eventCancelDownload_Parms), Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics
	{
		struct BaseFilesDownloader_eventLoadFileToArray_Parms
		{
			TArray<uint8> Result;
			FString Filename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToArray_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToArray_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventLoadFileToArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFilesDownloader_eventLoadFileToArray_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Load a binary file to a dynamic array with two uninitialized bytes at end as padding\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Load a binary file to a dynamic array with two uninitialized bytes at end as padding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "LoadFileToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::BaseFilesDownloader_eventLoadFileToArray_Parms), Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics
	{
		struct BaseFilesDownloader_eventLoadFileToString_Parms
		{
			FString Result;
			FString Filename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToString_Parms, Result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventLoadFileToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFilesDownloader_eventLoadFileToString_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Load a text file to an FString.\n\x09 * Supports all combination of ANSI/Unicode files and platforms\n\x09 * \n\x09 * @param Result string representation of the loaded file\n\x09 * @param Filename name of the file to load\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Load a text file to an FString.\nSupports all combination of ANSI/Unicode files and platforms\n\n@param Result string representation of the loaded file\n@param Filename name of the file to load" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::BaseFilesDownloader_eventLoadFileToString_Parms), Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics
	{
		struct BaseFilesDownloader_eventSaveArrayToFile_Parms
		{
			TArray<uint8> Bytes;
			FString Filename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventSaveArrayToFile_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventSaveArrayToFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventSaveArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFilesDownloader_eventSaveArrayToFile_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Save a binary array to a file\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Save a binary array to a file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "SaveArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::BaseFilesDownloader_eventSaveArrayToFile_Parms), Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics
	{
		struct BaseFilesDownloader_eventSaveStringToFile_Parms
		{
			FString String;
			FString Filename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventSaveStringToFile_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFilesDownloader_eventSaveStringToFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFilesDownloader_eventSaveStringToFile_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Write the string to a file.\n\x09 * Supports all combination of ANSI/Unicode files and platforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Write the string to a file.\nSupports all combination of ANSI/Unicode files and platforms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "SaveStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::BaseFilesDownloader_eventSaveStringToFile_Parms), Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFilesDownloader);
	UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister()
	{
		return UBaseFilesDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFilesDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFilesDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseFilesDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseFilesDownloader_BytesToString, "BytesToString" }, // 2301884684
		{ &Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture, "BytesToTexture" }, // 2997996202
		{ &Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload, "CancelDownload" }, // 2081366674
		{ &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray, "LoadFileToArray" }, // 390330681
		{ &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString, "LoadFileToString" }, // 1044800094
		{ &Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile, "SaveArrayToFile" }, // 3329856350
		{ &Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile, "SaveStringToFile" }, // 1241542374
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n * Base class for downloading files. It also contains some helper functions\n */" },
		{ "IncludePath", "BaseFilesDownloader.h" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Base class for downloading files. It also contains some helper functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFilesDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFilesDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFilesDownloader_Statics::ClassParams = {
		&UBaseFilesDownloader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFilesDownloader()
	{
		if (!Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton, Z_Construct_UClass_UBaseFilesDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UBaseFilesDownloader>()
	{
		return UBaseFilesDownloader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFilesDownloader);
	struct Z_CompiledInDeferFile_FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFilesDownloader, UBaseFilesDownloader::StaticClass, TEXT("UBaseFilesDownloader"), &Z_Registration_Info_UClass_UBaseFilesDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFilesDownloader), 4097425456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_4230202087(TEXT("/Script/RuntimeFilesDownloader"),
		Z_CompiledInDeferFile_FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_metachat_ue_runtime_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
