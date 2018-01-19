// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HeightMapReader.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapReader() {}
// Cross Module References
	JOLLYROGER_API UFunction* Z_Construct_UFunction_AHeightMapReader_GetRenderTargetValue();
	JOLLYROGER_API UClass* Z_Construct_UClass_AHeightMapReader();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	JOLLYROGER_API UFunction* Z_Construct_UFunction_AHeightMapReader_UpdateBuffer();
	JOLLYROGER_API UClass* Z_Construct_UClass_AHeightMapReader_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JollyRoger();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void AHeightMapReader::StaticRegisterNativesAHeightMapReader()
	{
		UClass* Class = AHeightMapReader::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetRenderTargetValue", (Native)&AHeightMapReader::execGetRenderTargetValue },
			{ "UpdateBuffer", (Native)&AHeightMapReader::execUpdateBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AHeightMapReader_GetRenderTargetValue()
	{
		struct HeightMapReader_eventGetRenderTargetValue_Parms
		{
			float x;
			float y;
			FColor ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeightMapReader();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRenderTargetValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(HeightMapReader_eventGetRenderTargetValue_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, HeightMapReader_eventGetRenderTargetValue_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FColor());
			UProperty* NewProp_y = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("y"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(y, HeightMapReader_eventGetRenderTargetValue_Parms), 0x0010000000000080);
			UProperty* NewProp_x = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("x"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(x, HeightMapReader_eventGetRenderTargetValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HeightMap|Texture Helper"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("HeightMapReader.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeightMapReader_UpdateBuffer()
	{
		UObject* Outer = Z_Construct_UClass_AHeightMapReader();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HeightMap|Update"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("HeightMapReader.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeightMapReader_NoRegister()
	{
		return AHeightMapReader::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeightMapReader()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_JollyRoger();
			OuterClass = AHeightMapReader::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHeightMapReader_GetRenderTargetValue());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeightMapReader_UpdateBuffer());

				UProperty* NewProp_RenderTarget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RenderTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RenderTarget, AHeightMapReader), 0x0010000000000001, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeightMapReader_GetRenderTargetValue(), "GetRenderTargetValue"); // 4044159542
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeightMapReader_UpdateBuffer(), "UpdateBuffer"); // 2438024932
				static TCppClassTypeInfo<TCppClassTypeTraits<AHeightMapReader> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HeightMapReader.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HeightMapReader.h"));
				MetaData->SetValue(NewProp_RenderTarget, TEXT("Category"), TEXT("HeightMap"));
				MetaData->SetValue(NewProp_RenderTarget, TEXT("ModuleRelativePath"), TEXT("HeightMapReader.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeightMapReader, 1634365465);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeightMapReader(Z_Construct_UClass_AHeightMapReader, &AHeightMapReader::StaticClass, TEXT("/Script/JollyRoger"), TEXT("AHeightMapReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeightMapReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
