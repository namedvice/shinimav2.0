// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidManifestConfigurator/Public/AndroidManifestConfiguratorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidManifestConfiguratorSettings() {}
// Cross Module References
	ANDROIDMANIFESTCONFIGURATOR_API UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression();
	UPackage* Z_Construct_UPackage__Script_AndroidManifestConfigurator();
	ANDROIDMANIFESTCONFIGURATOR_API UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType();
	ANDROIDMANIFESTCONFIGURATOR_API UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType();
	ANDROIDMANIFESTCONFIGURATOR_API UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType();
	ANDROIDMANIFESTCONFIGURATOR_API UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType();
	ANDROIDMANIFESTCONFIGURATOR_API UClass* Z_Construct_UClass_UAndroidManifestConfiguratorSettings_NoRegister();
	ANDROIDMANIFESTCONFIGURATOR_API UClass* Z_Construct_UClass_UAndroidManifestConfiguratorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAndroidTexturesCompression_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression, Z_Construct_UPackage__Script_AndroidManifestConfigurator(), TEXT("EAndroidTexturesCompression"));
		}
		return Singleton;
	}
	template<> ANDROIDMANIFESTCONFIGURATOR_API UEnum* StaticEnum<EAndroidTexturesCompression::Type>()
	{
		return EAndroidTexturesCompression_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidTexturesCompression(EAndroidTexturesCompression_StaticEnum, TEXT("/Script/AndroidManifestConfigurator"), TEXT("EAndroidTexturesCompression"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression_Hash() { return 1381021870U; }
	UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidManifestConfigurator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidTexturesCompression"), 0, Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidTexturesCompression::Default", (int64)EAndroidTexturesCompression::Default },
				{ "EAndroidTexturesCompression::ETC1", (int64)EAndroidTexturesCompression::ETC1 },
				{ "EAndroidTexturesCompression::ETC2", (int64)EAndroidTexturesCompression::ETC2 },
				{ "EAndroidTexturesCompression::ATC", (int64)EAndroidTexturesCompression::ATC },
				{ "EAndroidTexturesCompression::DXT", (int64)EAndroidTexturesCompression::DXT },
				{ "EAndroidTexturesCompression::PVRTC", (int64)EAndroidTexturesCompression::PVRTC },
				{ "EAndroidTexturesCompression::ASTC", (int64)EAndroidTexturesCompression::ASTC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ASTC.Name", "EAndroidTexturesCompression::ASTC" },
				{ "ATC.Name", "EAndroidTexturesCompression::ATC" },
				{ "Default.Name", "EAndroidTexturesCompression::Default" },
				{ "DXT.Name", "EAndroidTexturesCompression::DXT" },
				{ "ETC1.Name", "EAndroidTexturesCompression::ETC1" },
				{ "ETC2.Name", "EAndroidTexturesCompression::ETC2" },
				{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
				{ "PVRTC.Name", "EAndroidTexturesCompression::PVRTC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
				nullptr,
				"EAndroidTexturesCompression",
				"EAndroidTexturesCompression::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAndroidTouchScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType, Z_Construct_UPackage__Script_AndroidManifestConfigurator(), TEXT("EAndroidTouchScreenType"));
		}
		return Singleton;
	}
	template<> ANDROIDMANIFESTCONFIGURATOR_API UEnum* StaticEnum<EAndroidTouchScreenType::Type>()
	{
		return EAndroidTouchScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidTouchScreenType(EAndroidTouchScreenType_StaticEnum, TEXT("/Script/AndroidManifestConfigurator"), TEXT("EAndroidTouchScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType_Hash() { return 2132519633U; }
	UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidManifestConfigurator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidTouchScreenType"), 0, Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidTouchScreenType::undefined", (int64)EAndroidTouchScreenType::undefined },
				{ "EAndroidTouchScreenType::notouch", (int64)EAndroidTouchScreenType::notouch },
				{ "EAndroidTouchScreenType::stylus", (int64)EAndroidTouchScreenType::stylus },
				{ "EAndroidTouchScreenType::finger", (int64)EAndroidTouchScreenType::finger },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "finger.Comment", "/** The application requires a touch screen that can be operated with a finger. */" },
				{ "finger.DisplayName", "Finger" },
				{ "finger.Name", "EAndroidTouchScreenType::finger" },
				{ "finger.ToolTip", "The application requires a touch screen that can be operated with a finger." },
				{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
				{ "notouch.Comment", "/** The application doesn't require a touch screen. */" },
				{ "notouch.DisplayName", "No Touch" },
				{ "notouch.Name", "EAndroidTouchScreenType::notouch" },
				{ "notouch.ToolTip", "The application doesn't require a touch screen." },
				{ "stylus.Comment", "/** The application requires a touch screen that's operated with a stylus. */" },
				{ "stylus.DisplayName", "Stylus" },
				{ "stylus.Name", "EAndroidTouchScreenType::stylus" },
				{ "stylus.ToolTip", "The application requires a touch screen that's operated with a stylus." },
				{ "undefined.Comment", "/** The application doesn't require a touch screen. (The touch screen requirement is undefined.) This is the default value. */" },
				{ "undefined.DisplayName", "Undefined" },
				{ "undefined.Name", "EAndroidTouchScreenType::undefined" },
				{ "undefined.ToolTip", "The application doesn't require a touch screen. (The touch screen requirement is undefined.) This is the default value." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
				nullptr,
				"EAndroidTouchScreenType",
				"EAndroidTouchScreenType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAndroidNavigationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType, Z_Construct_UPackage__Script_AndroidManifestConfigurator(), TEXT("EAndroidNavigationType"));
		}
		return Singleton;
	}
	template<> ANDROIDMANIFESTCONFIGURATOR_API UEnum* StaticEnum<EAndroidNavigationType::Type>()
	{
		return EAndroidNavigationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidNavigationType(EAndroidNavigationType_StaticEnum, TEXT("/Script/AndroidManifestConfigurator"), TEXT("EAndroidNavigationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType_Hash() { return 1294060010U; }
	UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidManifestConfigurator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidNavigationType"), 0, Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidNavigationType::undefined", (int64)EAndroidNavigationType::undefined },
				{ "EAndroidNavigationType::nonav", (int64)EAndroidNavigationType::nonav },
				{ "EAndroidNavigationType::dpad", (int64)EAndroidNavigationType::dpad },
				{ "EAndroidNavigationType::trackball", (int64)EAndroidNavigationType::trackball },
				{ "EAndroidNavigationType::wheel", (int64)EAndroidNavigationType::wheel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "dpad.Comment", "/** The application requires a D-pad (directional pad) for navigation. */" },
				{ "dpad.DisplayName", "D-pad" },
				{ "dpad.Name", "EAndroidNavigationType::dpad" },
				{ "dpad.ToolTip", "The application requires a D-pad (directional pad) for navigation." },
				{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
				{ "nonav.Comment", "/** The application does not require a navigation control. */" },
				{ "nonav.DisplayName", "No Nav" },
				{ "nonav.Name", "EAndroidNavigationType::nonav" },
				{ "nonav.ToolTip", "The application does not require a navigation control." },
				{ "trackball.Comment", "/** The application requires a trackball for navigation. */" },
				{ "trackball.DisplayName", "Trackball" },
				{ "trackball.Name", "EAndroidNavigationType::trackball" },
				{ "trackball.ToolTip", "The application requires a trackball for navigation." },
				{ "undefined.Comment", "/** The application does not require any type of navigation control. (The navigation requirement is not defined.) This is the default value. */" },
				{ "undefined.DisplayName", "Undefined" },
				{ "undefined.Name", "EAndroidNavigationType::undefined" },
				{ "undefined.ToolTip", "The application does not require any type of navigation control. (The navigation requirement is not defined.) This is the default value." },
				{ "wheel.Comment", "/** The application requires a navigation wheel. */" },
				{ "wheel.DisplayName", "Wheel" },
				{ "wheel.Name", "EAndroidNavigationType::wheel" },
				{ "wheel.ToolTip", "The application requires a navigation wheel." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
				nullptr,
				"EAndroidNavigationType",
				"EAndroidNavigationType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAndroidKeyboardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType, Z_Construct_UPackage__Script_AndroidManifestConfigurator(), TEXT("EAndroidKeyboardType"));
		}
		return Singleton;
	}
	template<> ANDROIDMANIFESTCONFIGURATOR_API UEnum* StaticEnum<EAndroidKeyboardType::Type>()
	{
		return EAndroidKeyboardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidKeyboardType(EAndroidKeyboardType_StaticEnum, TEXT("/Script/AndroidManifestConfigurator"), TEXT("EAndroidKeyboardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType_Hash() { return 3913555609U; }
	UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidManifestConfigurator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidKeyboardType"), 0, Get_Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidKeyboardType::undefined", (int64)EAndroidKeyboardType::undefined },
				{ "EAndroidKeyboardType::nokeys", (int64)EAndroidKeyboardType::nokeys },
				{ "EAndroidKeyboardType::qwerty", (int64)EAndroidKeyboardType::qwerty },
				{ "EAndroidKeyboardType::twelvekey", (int64)EAndroidKeyboardType::twelvekey },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
				{ "nokeys.Comment", "/** The application does not require a keyboard. */" },
				{ "nokeys.DisplayName", "No Keys" },
				{ "nokeys.Name", "EAndroidKeyboardType::nokeys" },
				{ "nokeys.ToolTip", "The application does not require a keyboard." },
				{ "qwerty.Comment", "/** The application requires a standard QWERTY keyboard. */" },
				{ "qwerty.DisplayName", "Qwerty" },
				{ "qwerty.Name", "EAndroidKeyboardType::qwerty" },
				{ "qwerty.ToolTip", "The application requires a standard QWERTY keyboard." },
				{ "twelvekey.Comment", "/** The application requires a twelve-key keypad, like those on most phones ? with keys for the digits from 0 through 9 plus star (*) and pound (#) keys. */" },
				{ "twelvekey.DisplayName", "Twelve Key" },
				{ "twelvekey.Name", "EAndroidKeyboardType::twelvekey" },
				{ "twelvekey.ToolTip", "The application requires a twelve-key keypad, like those on most phones ? with keys for the digits from 0 through 9 plus star (*) and pound (#) keys." },
				{ "undefined.Comment", "/** The application does not require a keyboard. (A keyboard requirement is not defined.) This is the default value. */" },
				{ "undefined.DisplayName", "Undefined" },
				{ "undefined.Name", "EAndroidKeyboardType::undefined" },
				{ "undefined.ToolTip", "The application does not require a keyboard. (A keyboard requirement is not defined.) This is the default value." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
				nullptr,
				"EAndroidKeyboardType",
				"EAndroidKeyboardType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFeaturesType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, Z_Construct_UPackage__Script_AndroidManifestConfigurator(), TEXT("EFeaturesType"));
		}
		return Singleton;
	}
	template<> ANDROIDMANIFESTCONFIGURATOR_API UEnum* StaticEnum<EFeaturesType::Type>()
	{
		return EFeaturesType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFeaturesType(EFeaturesType_StaticEnum, TEXT("/Script/AndroidManifestConfigurator"), TEXT("EFeaturesType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType_Hash() { return 1608232496U; }
	UEnum* Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidManifestConfigurator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFeaturesType"), 0, Get_Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFeaturesType::Default", (int64)EFeaturesType::Default },
				{ "EFeaturesType::Required", (int64)EFeaturesType::Required },
				{ "EFeaturesType::NotRequired", (int64)EFeaturesType::NotRequired },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Comment", "/** Default value */" },
				{ "Default.Name", "EFeaturesType::Default" },
				{ "Default.ToolTip", "Default value" },
				{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
				{ "NotRequired.Comment", "/** Prefers to have the feature but can function without it. */" },
				{ "NotRequired.Name", "EFeaturesType::NotRequired" },
				{ "NotRequired.ToolTip", "Prefers to have the feature but can function without it." },
				{ "Required.Comment", "/** Application requires and cannot function without the declared feature. */" },
				{ "Required.Name", "EFeaturesType::Required" },
				{ "Required.ToolTip", "Application requires and cannot function without the declared feature." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
				nullptr,
				"EFeaturesType",
				"EFeaturesType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAndroidManifestConfiguratorSettings::StaticRegisterNativesUAndroidManifestConfiguratorSettings()
	{
	}
	UClass* Z_Construct_UClass_UAndroidManifestConfiguratorSettings_NoRegister()
	{
		return UAndroidManifestConfiguratorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturesCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TexturesCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpenGLAEP_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bOpenGLAEP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmallScreens_MetaData[];
#endif
		static void NewProp_bSmallScreens_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmallScreens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalScreens_MetaData[];
#endif
		static void NewProp_bNormalScreens_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalScreens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLargeScreens_MetaData[];
#endif
		static void NewProp_bLargeScreens_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLargeScreens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bXLargeScreens_MetaData[];
#endif
		static void NewProp_bXLargeScreens_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXLargeScreens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnyDensity_MetaData[];
#endif
		static void NewProp_bAnyDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnyDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReqFiveWayNav_MetaData[];
#endif
		static void NewProp_bReqFiveWayNav_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReqFiveWayNav;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReqHardKeyboard_MetaData[];
#endif
		static void NewProp_bReqHardKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReqHardKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReqKeyboardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReqKeyboardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReqNavigationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReqNavigationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReqTouchScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReqTouchScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHardwareTypeAutomotive_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bHardwareTypeAutomotive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHardwareTypeTelevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bHardwareTypeTelevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHardwareTypeWatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bHardwareTypeWatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFingerprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bFingerprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGamepad_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAudioLowLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bAudioLowLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAudioOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bAudioOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAudioPro_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bAudioPro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAudioMicrophone_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bAudioMicrophone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBluetooth_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bBluetooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBluetoothLe_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bBluetoothLe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraAny_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraAny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraAutofocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraAutofocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraPostProcessing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraPostProcessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraManualSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraManualSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraExternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraExternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraFull_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCameraFull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumerIR_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bConsumerIR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocationGPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bLocationGPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocationNetwork_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bLocationNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNFC_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bNFC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorAccelerometer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorAccelerometer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorAmbientTemperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorAmbientTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorBarometer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorBarometer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorCompass_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorCompass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorGyroscope_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorGyroscope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorHifi_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorHifi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorHeartrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorHeartrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorHeartrateECG_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorHeartrateECG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorRelativeHumidity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorRelativeHumidity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorStepCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorStepCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensorStepDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSensorStepDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTelephony_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTelephony;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTelephonyCDMA_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTelephonyCDMA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTelephonyGSM_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTelephonyGSM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTouchscreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTouchscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTouchscreenMultitouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTouchscreenMultitouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTouchscreenMultitouchDistinct_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTouchscreenMultitouchDistinct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTouchscreenMultitouchJazzhand_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bTouchscreenMultitouchJazzhand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFakeTouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bFakeTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFakeTouchMultiTouchDistinct_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bFakeTouchMultiTouchDistinct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFakeTouchMultiTouchJazzhand_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bFakeTouchMultiTouchJazzhand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUSBAccessory_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bUSBAccessory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUSBHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bUSBHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWiFi_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bWiFi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWiFiDirect_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bWiFiDirect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareSip_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareSip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareSipVoIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareSipVoIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareWebview_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareWebview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareInputMethods_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareInputMethods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareBackup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareBackup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareDeviceAdmin_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareDeviceAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareManagedUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareManagedUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareSecurelyRemovesUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareSecurelyRemovesUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareVerifiedBoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareVerifiedBoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareMidi_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareMidi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwarePrint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwarePrint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareLeanback_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareLeanback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareLiveTV_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareLiveTV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareAppWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareAppWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareHomeScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareHomeScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftwareLiveWallpaper_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bSoftwareLiveWallpaper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidManifestConfigurator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidManifestConfiguratorSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_TexturesCompression_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Indicates texture compression. Default means all types of texture compression. */" },
		{ "DisplayName", "Textures Compression" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates texture compression. Default means all types of texture compression." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_TexturesCompression = { "TexturesCompression", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, TexturesCompression), Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTexturesCompression, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_TexturesCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_TexturesCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bOpenGLAEP_MetaData[] = {
		{ "Category", "OpenGL" },
		{ "Comment", "/** The app uses the OpenGL ES Android Extension Pack that is installed on the device. */" },
		{ "DisplayName", "OpenGL ES AEP" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the OpenGL ES Android Extension Pack that is installed on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bOpenGLAEP = { "bOpenGLAEP", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bOpenGLAEP), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bOpenGLAEP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bOpenGLAEP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens_MetaData[] = {
		{ "Category", "Screens" },
		{ "Comment", "/** Indicates whether the application supports smaller screen form-factors. A small screen is defined as one with a smaller aspect ratio than the \"normal\" (traditional HVGA) screen. An application that does not support small screens will not be available for small screen devices from external services (such as Google Play), because there is little the platform can do to make such an application work on a smaller screen. This is \"true\" by default. */" },
		{ "DisplayName", "Small Screens" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates whether the application supports smaller screen form-factors. A small screen is defined as one with a smaller aspect ratio than the \"normal\" (traditional HVGA) screen. An application that does not support small screens will not be available for small screen devices from external services (such as Google Play), because there is little the platform can do to make such an application work on a smaller screen. This is \"true\" by default." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bSmallScreens = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens = { "bSmallScreens", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens_MetaData[] = {
		{ "Category", "Screens" },
		{ "Comment", "/** Indicates whether an application supports the \"normal\" screen form-factors. Traditionally this is an HVGA medium density screen, but WQVGA low density and WVGA high density are also considered to be normal. This attribute is \"true\" by default. */" },
		{ "DisplayName", "Normal Screens" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates whether an application supports the \"normal\" screen form-factors. Traditionally this is an HVGA medium density screen, but WQVGA low density and WVGA high density are also considered to be normal. This attribute is \"true\" by default." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bNormalScreens = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens = { "bNormalScreens", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens_MetaData[] = {
		{ "Category", "Screens" },
		{ "Comment", "/** Indicates whether the application supports larger screen form-factors. A large screen is defined as a screen that is significantly larger than a \"normal\" handset screen, and thus might require some special care on the application's part to make good use of it, though it may rely on resizing by the system to fill the screen. The default value for this actually varies between some versions, so it's better if you explicitly declare this attribute at all times. Beware that setting it \"false\" will generally enable screen compatibility mode. */" },
		{ "DisplayName", "Large Screens" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates whether the application supports larger screen form-factors. A large screen is defined as a screen that is significantly larger than a \"normal\" handset screen, and thus might require some special care on the application's part to make good use of it, though it may rely on resizing by the system to fill the screen. The default value for this actually varies between some versions, so it's better if you explicitly declare this attribute at all times. Beware that setting it \"false\" will generally enable screen compatibility mode." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bLargeScreens = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens = { "bLargeScreens", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens_MetaData[] = {
		{ "Category", "Screens" },
		{ "Comment", "/** Indicates whether the application supports extra large screen form-factors. An xlarge screen is defined as a screen that is significantly larger than a \"large\" screen, such as a tablet (or something larger) and may require special care on the application's part to make good use of it, though it may rely on resizing by the system to fill the screen. The default value for this actually varies between some versions, so it's better if you explicitly declare this attribute at all times. Beware that setting it \"false\" will generally enable screen compatibility mode. This attribute was introduced in API level 9. */" },
		{ "DisplayName", "XLarge Screens" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates whether the application supports extra large screen form-factors. An xlarge screen is defined as a screen that is significantly larger than a \"large\" screen, such as a tablet (or something larger) and may require special care on the application's part to make good use of it, though it may rely on resizing by the system to fill the screen. The default value for this actually varies between some versions, so it's better if you explicitly declare this attribute at all times. Beware that setting it \"false\" will generally enable screen compatibility mode. This attribute was introduced in API level 9." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bXLargeScreens = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens = { "bXLargeScreens", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity_MetaData[] = {
		{ "Category", "Screens" },
		{ "Comment", "/** Indicates whether the application includes resources to accommodate any screen density. For applications that support Android 1.6 (API level 4) and higher, this is \"true\" by default and you should not set it \"false\" unless you're absolutely certain that it's necessary for your application to work. The only time it might be necessary to disable this is if your app directly manipulates bitmaps. */" },
		{ "DisplayName", "Any Density" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Indicates whether the application includes resources to accommodate any screen density. For applications that support Android 1.6 (API level 4) and higher, this is \"true\" by default and you should not set it \"false\" unless you're absolutely certain that it's necessary for your application to work. The only time it might be necessary to disable this is if your app directly manipulates bitmaps." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bAnyDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity = { "bAnyDensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether or not the application requires a five-way navigation control - \"true\" if it does, and \"false\" if not. A five-way control is one that can move the selection up, down, right, or left, and also provides a way of invoking the current selection. It could be a D-pad (directional pad), trackball, or other device. If an application requires a directional control, but not a control of a particular type, it can set this attribute to \"true\" and ignore the reqNavigation attribute. However, if it requires a particular type of directional control, it can ignore this attribute and set reqNavigation instead. */" },
		{ "DisplayName", "Five-way navigation control" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Whether or not the application requires a five-way navigation control - \"true\" if it does, and \"false\" if not. A five-way control is one that can move the selection up, down, right, or left, and also provides a way of invoking the current selection. It could be a D-pad (directional pad), trackball, or other device. If an application requires a directional control, but not a control of a particular type, it can set this attribute to \"true\" and ignore the reqNavigation attribute. However, if it requires a particular type of directional control, it can ignore this attribute and set reqNavigation instead." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bReqFiveWayNav = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav = { "bReqFiveWayNav", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether or not the application requires a hardware keyboard - \"true\" if it does, and \"false\" if not. */" },
		{ "DisplayName", "Hard keyboard" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "Whether or not the application requires a hardware keyboard - \"true\" if it does, and \"false\" if not." },
	};
#endif
	void Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard_SetBit(void* Obj)
	{
		((UAndroidManifestConfiguratorSettings*)Obj)->bReqHardKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard = { "bReqHardKeyboard", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidManifestConfiguratorSettings), &Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqKeyboardType_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The type of keyboard the application requires, if any at all. This attribute does not distinguish between hardware and software keyboards. If a hardware keyboard of a certain type is required, specify the type here and also set the reqHardKeyboard attribute to \"true\". */" },
		{ "DisplayName", "Hard keyboard type" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The type of keyboard the application requires, if any at all. This attribute does not distinguish between hardware and software keyboards. If a hardware keyboard of a certain type is required, specify the type here and also set the reqHardKeyboard attribute to \"true\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqKeyboardType = { "ReqKeyboardType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, ReqKeyboardType), Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidKeyboardType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqKeyboardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqKeyboardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqNavigationType_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The navigation device required by the application, if any. */" },
		{ "DisplayName", "Navigation device type" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The navigation device required by the application, if any." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqNavigationType = { "ReqNavigationType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, ReqNavigationType), Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidNavigationType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqNavigationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqNavigationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqTouchScreen_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The type of touch screen the application requires, if any at all. */" },
		{ "DisplayName", "Touch screen type" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The type of touch screen the application requires, if any at all." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqTouchScreen = { "ReqTouchScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, ReqTouchScreen), Z_Construct_UEnum_AndroidManifestConfigurator_EAndroidTouchScreenType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqTouchScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqTouchScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeAutomotive_MetaData[] = {
		{ "Category", "Hardware Type" },
		{ "Comment", "/** The app is designed to show its UI on a set of screens inside a vehicle. The user interacts with the app using hard buttons, touch, rotary controllers, and mouse-like interfaces. The vehicle's screens usually appear in the center console or the instrument cluster of a vehicle. These screens usually have limited size and resolution. */" },
		{ "DisplayName", "Automotive (for vehicles)" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app is designed to show its UI on a set of screens inside a vehicle. The user interacts with the app using hard buttons, touch, rotary controllers, and mouse-like interfaces. The vehicle's screens usually appear in the center console or the instrument cluster of a vehicle. These screens usually have limited size and resolution." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeAutomotive = { "bHardwareTypeAutomotive", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bHardwareTypeAutomotive), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeAutomotive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeAutomotive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeTelevision_MetaData[] = {
		{ "Category", "Hardware Type" },
		{ "Comment", "/** The app is designed to show its UI on a television. This feature defines \"television\" to be a typical living room television experience: displayed on a big screen, where the user is sitting far away and the dominant form of input is something like a d-pad, and generally not using a mouse, pointer, or touch device. */" },
		{ "DisplayName", "Television" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app is designed to show its UI on a television. This feature defines \"television\" to be a typical living room television experience: displayed on a big screen, where the user is sitting far away and the dominant form of input is something like a d-pad, and generally not using a mouse, pointer, or touch device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeTelevision = { "bHardwareTypeTelevision", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bHardwareTypeTelevision), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeTelevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeTelevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeWatch_MetaData[] = {
		{ "Category", "Hardware Type" },
		{ "Comment", "/** The app is designed to show its UI on a watch. A watch is worn on the body, such as on the wrist. The user is very close to the device while interacting with it. */" },
		{ "DisplayName", "Watch" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app is designed to show its UI on a watch. A watch is worn on the body, such as on the wrist. The user is very close to the device while interacting with it." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeWatch = { "bHardwareTypeWatch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bHardwareTypeWatch), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeWatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeWatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFingerprint_MetaData[] = {
		{ "Category", "Fingerprint" },
		{ "Comment", "/** The app reads fingerprints using the device's biometric hardware. */" },
		{ "DisplayName", "Biometric hardware for fingerprints" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app reads fingerprints using the device's biometric hardware." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFingerprint = { "bFingerprint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bFingerprint), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFingerprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFingerprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bGamepad_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "Comment", "/** The app captures game controller input, either from the device itself or from a connected gamepad. */" },
		{ "DisplayName", "Gamepad" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app captures game controller input, either from the device itself or from a connected gamepad." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bGamepad = { "bGamepad", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bGamepad), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioLowLatency_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The app uses the device's low-latency audio pipeline, which reduces lag and delays when processing sound input or output. */" },
		{ "DisplayName", "Audio low latency" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's low-latency audio pipeline, which reduces lag and delays when processing sound input or output." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioLowLatency = { "bAudioLowLatency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bAudioLowLatency), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioLowLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioLowLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioOutput_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The app transmits sound using the device's speakers, audio jack, Bluetooth streaming capabilities, or a similar mechanism. */" },
		{ "DisplayName", "Audio output" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app transmits sound using the device's speakers, audio jack, Bluetooth streaming capabilities, or a similar mechanism." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioOutput = { "bAudioOutput", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bAudioOutput), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioPro_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The app uses the device's high-end audio functionality and performance capabilities. */" },
		{ "DisplayName", "High-end audio functionalities" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's high-end audio functionality and performance capabilities." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioPro = { "bAudioPro", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bAudioPro), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioPro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioPro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioMicrophone_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The app records audio using the device's microphone. */" },
		{ "DisplayName", "Microphone" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app records audio using the device's microphone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioMicrophone = { "bAudioMicrophone", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bAudioMicrophone), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioMicrophone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioMicrophone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetooth_MetaData[] = {
		{ "Category", "Bluetooth" },
		{ "Comment", "/** The app uses the device's Bluetooth features, usually to communicate with other Bluetooth-enabled devices. */" },
		{ "DisplayName", "Bluetooth" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's Bluetooth features, usually to communicate with other Bluetooth-enabled devices." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetooth = { "bBluetooth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bBluetooth), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetoothLe_MetaData[] = {
		{ "Category", "Bluetooth" },
		{ "Comment", "/** The app uses the device's Bluetooth Low Energy radio features. */" },
		{ "DisplayName", "Bluetooth Low Energy features" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's Bluetooth Low Energy radio features." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetoothLe = { "bBluetoothLe", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bBluetoothLe), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetoothLe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetoothLe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the device's back-facing camera. Devices with only a front-facing camera do not list this feature, so use the android.hardware.camera.any feature instead if your app can communicate with any camera, regardless of which direction the camera faces. */" },
		{ "DisplayName", "Camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's back-facing camera. Devices with only a front-facing camera do not list this feature, so use the android.hardware.camera.any feature instead if your app can communicate with any camera, regardless of which direction the camera faces." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCamera = { "bCamera", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCamera), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAny_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses one of the device's cameras, or an external camera that the user connects to the device. Use this value instead of android.hardware.camera if your app does not require the camera to be a back-facing one. */" },
		{ "DisplayName", "Any camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses one of the device's cameras, or an external camera that the user connects to the device. Use this value instead of android.hardware.camera if your app does not require the camera to be a back-facing one." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAny = { "bCameraAny", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraAny), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAutofocus_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the autofocus feature that the device's camera supports. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "Autofocus in camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the autofocus feature that the device's camera supports. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAutofocus = { "bCameraAutofocus", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraAutofocus), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAutofocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAutofocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraPostProcessing_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the MANUAL_POST_PROCESSING feature that the device's camera supports. This feature allows your app to override the camera's auto white balance functionality. Use android.colorCorrection.transform, android.colorCorrection.gains, and an android.colorCorrection.mode of TRANSFORM_MATRIX. */" },
		{ "DisplayName", "Post-processing in camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the MANUAL_POST_PROCESSING feature that the device's camera supports. This feature allows your app to override the camera's auto white balance functionality. Use android.colorCorrection.transform, android.colorCorrection.gains, and an android.colorCorrection.mode of TRANSFORM_MATRIX." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraPostProcessing = { "bCameraPostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraPostProcessing), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraPostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraPostProcessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraManualSensor_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the MANUAL_SENSOR feature that the device's camera supports. This feature implies support for auto-exposure locking (android.control.aeLock), which allows the camera's exposure time and sensitivity to remain fixed at specific values. */" },
		{ "DisplayName", "Manual sensor in camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the MANUAL_SENSOR feature that the device's camera supports. This feature implies support for auto-exposure locking (android.control.aeLock), which allows the camera's exposure time and sensitivity to remain fixed at specific values." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraManualSensor = { "bCameraManualSensor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraManualSensor), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraManualSensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraManualSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraRaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the RAW feature that the device's camera supports. This feature implies that the device can save DNG (raw) files and that the device's camera provides the DNG-related metadata necessary for your app to process these raw images directly. */" },
		{ "DisplayName", "RAW in camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the RAW feature that the device's camera supports. This feature implies that the device can save DNG (raw) files and that the device's camera provides the DNG-related metadata necessary for your app to process these raw images directly." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraRaw = { "bCameraRaw", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraRaw), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraExternal_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app communicates with an external camera that the user connects to the device. This feature does not guarantee, however, that the external camera is available for your app to use. */" },
		{ "DisplayName", "External camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app communicates with an external camera that the user connects to the device. This feature does not guarantee, however, that the external camera is available for your app to use." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraExternal = { "bCameraExternal", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraExternal), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraExternal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraExternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFlash_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the flash feature that the device's camera supports. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "Flash in camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the flash feature that the device's camera supports. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFlash = { "bCameraFlash", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraFlash), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFront_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the device's front-facing camera. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "Front camera" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's front-facing camera. By using this feature, an app implies that it also uses the android.hardware.camera feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFront = { "bCameraFront", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraFront), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFull_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The app uses the FULL-level image-capturing support that at least one of the device's cameras provides. Cameras with FULL support provide burst-capture capabilities, per-frame control, and manual post-processing control. */" },
		{ "DisplayName", "Full camera support" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the FULL-level image-capturing support that at least one of the device's cameras provides. Cameras with FULL support provide burst-capture capabilities, per-frame control, and manual post-processing control." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFull = { "bCameraFull", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bCameraFull), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bConsumerIR_MetaData[] = {
		{ "Category", "Infrared hardware" },
		{ "Comment", "/** The app uses the device's infrared (IR) capabilities, usually to communicate with other consumer IR devices. */" },
		{ "DisplayName", "IR support" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's infrared (IR) capabilities, usually to communicate with other consumer IR devices." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bConsumerIR = { "bConsumerIR", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bConsumerIR), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bConsumerIR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bConsumerIR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The app uses one or more features on the device for determining location, such as GPS location, network location, or cell location. */" },
		{ "DisplayName", "Geolocation" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses one or more features on the device for determining location, such as GPS location, network location, or cell location." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocation = { "bLocation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bLocation), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationGPS_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The app uses precise location coordinates obtained from a Global Positioning System (GPS) receiver on the device. */" },
		{ "DisplayName", "GPS for geolocation" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses precise location coordinates obtained from a Global Positioning System (GPS) receiver on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationGPS = { "bLocationGPS", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bLocationGPS), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationGPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationGPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationNetwork_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The app uses coarse location coordinates obtained from a network-based geolocation system supported on the device. */" },
		{ "DisplayName", "Network-based geolocation" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses coarse location coordinates obtained from a network-based geolocation system supported on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationNetwork = { "bLocationNetwork", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bLocationNetwork), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationNetwork_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNFC_MetaData[] = {
		{ "Category", "NFC" },
		{ "Comment", "/** The app uses the device's Near-Field Communication (NFC) radio features. */" },
		{ "DisplayName", "NFC" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's Near-Field Communication (NFC) radio features." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNFC = { "bNFC", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bNFC), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNFC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNFC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAccelerometer_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses motion readings from the device's accelerometer to detect the device's current orientation. For example, an app could use accelerometer readings to determine when to switch between portrait and landscape orientations. */" },
		{ "DisplayName", "Accelerometer sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses motion readings from the device's accelerometer to detect the device's current orientation. For example, an app could use accelerometer readings to determine when to switch between portrait and landscape orientations." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAccelerometer = { "bSensorAccelerometer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorAccelerometer), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAccelerometer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAccelerometer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAmbientTemperature_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's ambient (environmental) temperature sensor. For example, a weather app could report indoor or outdoor temperature. */" },
		{ "DisplayName", "Ambient temperature sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's ambient (environmental) temperature sensor. For example, a weather app could report indoor or outdoor temperature." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAmbientTemperature = { "bSensorAmbientTemperature", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorAmbientTemperature), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAmbientTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAmbientTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorBarometer_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's barometer. For example, a weather app could report air pressure. */" },
		{ "DisplayName", "Barometer sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's barometer. For example, a weather app could report air pressure." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorBarometer = { "bSensorBarometer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorBarometer), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorBarometer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorBarometer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorCompass_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's magnetometer (compass). For example, a navigation app could show the current direction a user faces. */" },
		{ "DisplayName", "Compass sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's magnetometer (compass). For example, a navigation app could show the current direction a user faces." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorCompass = { "bSensorCompass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorCompass), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorCompass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorGyroscope_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's gyroscope to detect rotation and twist, creating a six-axis orientation system. By using this sensor, an app can detect more smoothly whether it needs to switch between portrait and landscape orientations. */" },
		{ "DisplayName", "Gyroscope sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's gyroscope to detect rotation and twist, creating a six-axis orientation system. By using this sensor, an app can detect more smoothly whether it needs to switch between portrait and landscape orientations." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorGyroscope = { "bSensorGyroscope", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorGyroscope), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorGyroscope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorGyroscope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHifi_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's high fidelity (Hi-Fi) sensors. For example, a gaming app could detect the user's high-precision movements. */" },
		{ "DisplayName", "Hi-Fi sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's high fidelity (Hi-Fi) sensors. For example, a gaming app could detect the user's high-precision movements." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHifi = { "bSensorHifi", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorHifi), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHifi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHifi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrate_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's heart rate monitor. For example, a fitness app could report trends in a user's heart rate over time. */" },
		{ "DisplayName", "Heartrate sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's heart rate monitor. For example, a fitness app could report trends in a user's heart rate over time." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrate = { "bSensorHeartrate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorHeartrate), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrateECG_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's elcardiogram (ECG) heart rate sensor. For example, a fitness app could report more detailed information about a user's heart rate. */" },
		{ "DisplayName", "Heartrate ECG sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's elcardiogram (ECG) heart rate sensor. For example, a fitness app could report more detailed information about a user's heart rate." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrateECG = { "bSensorHeartrateECG", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorHeartrateECG), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrateECG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrateECG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorLight_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's light sensor. For example, an app could display one of two different color schemes based on the ambient lighting conditions. */" },
		{ "DisplayName", "Light sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's light sensor. For example, an app could display one of two different color schemes based on the ambient lighting conditions." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorLight = { "bSensorLight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorLight), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorProximity_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's proximity sensor. For example, a telephony app could turn off the device's screen when the app detects that the user is holding the device close to their body. */" },
		{ "DisplayName", "Proximity sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's proximity sensor. For example, a telephony app could turn off the device's screen when the app detects that the user is holding the device close to their body." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorProximity = { "bSensorProximity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorProximity), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorRelativeHumidity_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's relative humidity sensor. For example, a weather app could use the humidity to calculate and report the current dewpoint. */" },
		{ "DisplayName", "Relative humidity sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's relative humidity sensor. For example, a weather app could use the humidity to calculate and report the current dewpoint." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorRelativeHumidity = { "bSensorRelativeHumidity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorRelativeHumidity), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorRelativeHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorRelativeHumidity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepCounter_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's step counter. For example, a fitness app could report the number of steps a user needs to take to achieve their daily step count goal. */" },
		{ "DisplayName", "Step counter sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's step counter. For example, a fitness app could report the number of steps a user needs to take to achieve their daily step count goal." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepCounter = { "bSensorStepCounter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorStepCounter), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepDetector_MetaData[] = {
		{ "Category", "Sensors" },
		{ "Comment", "/** The app uses the device's step detector. For example, a fitness app could use the time interval between steps to infer the type of exercise that the user is doing. */" },
		{ "DisplayName", "Step detector sensor" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's step detector. For example, a fitness app could use the time interval between steps to infer the type of exercise that the user is doing." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepDetector = { "bSensorStepDetector", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSensorStepDetector), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephony_MetaData[] = {
		{ "Category", "Telephony" },
		{ "Comment", "/** The app uses the device's telephony features, such as telephony radio with data communication services. */" },
		{ "DisplayName", "Telephony" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's telephony features, such as telephony radio with data communication services." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephony = { "bTelephony", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTelephony), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephony_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyCDMA_MetaData[] = {
		{ "Category", "Telephony" },
		{ "Comment", "/** The app uses the Code Division Multiple Access (CDMA) telephony radio system. */" },
		{ "DisplayName", "Telephony CDMA" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the Code Division Multiple Access (CDMA) telephony radio system." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyCDMA = { "bTelephonyCDMA", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTelephonyCDMA), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyCDMA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyCDMA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyGSM_MetaData[] = {
		{ "Category", "Telephony" },
		{ "Comment", "/** The app uses the Global System for Mobile Communications (GSM) telephony radio system. */" },
		{ "DisplayName", "Telephony GSM" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the Global System for Mobile Communications (GSM) telephony radio system." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyGSM = { "bTelephonyGSM", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTelephonyGSM), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyGSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyGSM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreen_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app uses the device's touchscreen capabilities for gestures that are more interactive than basic touch events, such as a fling. This is a superset of the android.hardware.faketouch feature. By default, your app requires this feature. As such, your app is not available to devices that provide only an emulated touch interface (\"fake touch\") by default. If you want to make your app available on devices that provide a fake touch interface (or even on devices that provide only a d-pad controller), you must explicitly declare that a touchscreen is not required by declaring android.hardware.touchscreen with android:required=\"false\". You should add this declaration if your app uses?but does not require?a real touchscreen interface. If your app in fact requires a touch interface (to perform more advanced touch gestures such as fling), then you don't need to declare any touch interface features because they're required by default. However, it's best if you explicitly declare all features that your app uses. If you require more complex touch interaction, such as multi-finger gestures, you should declare that your app uses advanced touchscreen features.*/" },
		{ "DisplayName", "TouchScreen" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's touchscreen capabilities for gestures that are more interactive than basic touch events, such as a fling. This is a superset of the android.hardware.faketouch feature. By default, your app requires this feature. As such, your app is not available to devices that provide only an emulated touch interface (\"fake touch\") by default. If you want to make your app available on devices that provide a fake touch interface (or even on devices that provide only a d-pad controller), you must explicitly declare that a touchscreen is not required by declaring android.hardware.touchscreen with android:required=\"false\". You should add this declaration if your app uses?but does not require?a real touchscreen interface. If your app in fact requires a touch interface (to perform more advanced touch gestures such as fling), then you don't need to declare any touch interface features because they're required by default. However, it's best if you explicitly declare all features that your app uses. If you require more complex touch interaction, such as multi-finger gestures, you should declare that your app uses advanced touchscreen features." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreen = { "bTouchscreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTouchscreen), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouch_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app uses the device's basic two-point multitouch capabilities, such as for pinch gestures, but the app does not need to track touches independently. This is a superset of the android.hardware.touchscreen feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen feature, unless this parent feature is declared with android:required=\"false\".*/" },
		{ "DisplayName", "TouchScreen MultiTouch" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's basic two-point multitouch capabilities, such as for pinch gestures, but the app does not need to track touches independently. This is a superset of the android.hardware.touchscreen feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouch = { "bTouchscreenMultitouch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTouchscreenMultitouch), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchDistinct_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app uses the device's advanced multitouch capabilities for tracking two or more points independently. This feature is a superset of the android.hardware.touchscreen.multitouch feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen.multitouch feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "TouchScreen MultiTouch Distinct" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's advanced multitouch capabilities for tracking two or more points independently. This feature is a superset of the android.hardware.touchscreen.multitouch feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen.multitouch feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchDistinct = { "bTouchscreenMultitouchDistinct", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTouchscreenMultitouchDistinct), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchDistinct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchDistinct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchJazzhand_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app uses the device's advanced multitouch capabilities for tracking five or more points independently. This feature is a superset of the android.hardware.touchscreen.multitouch feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen.multitouch feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "TouchScreen MultiTouch JazzHand" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the device's advanced multitouch capabilities for tracking five or more points independently. This feature is a superset of the android.hardware.touchscreen.multitouch feature. By using this feature, an app implies that it also uses the android.hardware.touchscreen.multitouch feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchJazzhand = { "bTouchscreenMultitouchJazzhand", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bTouchscreenMultitouchJazzhand), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchJazzhand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchJazzhand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouch_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app uses basic touch interaction events, such as tapping and dragging. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates a touchscreen (\"fake touch\" interface) or has an actual touchscreen. A device that offers a fake touch interface provides a user input system that emulates a subset of a touchscreen's capabilities. For example, a mouse or remote control could drive an on-screen cursor. If your app requires basic point and click interaction (in other words, it won't work with only a d-pad controller), you should declare this feature. Because this is the minimum level of touch interaction, you can also use an app that declares this feature on devices that offer more complex touch interfaces. */" },
		{ "DisplayName", "FakeTouch" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses basic touch interaction events, such as tapping and dragging. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates a touchscreen (\"fake touch\" interface) or has an actual touchscreen. A device that offers a fake touch interface provides a user input system that emulates a subset of a touchscreen's capabilities. For example, a mouse or remote control could drive an on-screen cursor. If your app requires basic point and click interaction (in other words, it won't work with only a d-pad controller), you should declare this feature. Because this is the minimum level of touch interaction, you can also use an app that declares this feature on devices that offer more complex touch interfaces." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouch = { "bFakeTouch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bFakeTouch), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchDistinct_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app tracks two or more distinct \"fingers\" on a fake touch interface. This is a superset of the android.hardware.faketouch feature. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates distinct tracking of two or more fingers or has an actual touchscreen. Unlike the distinct multitouch defined by android.hardware.touchscreen.multitouch.distinct, input devices that support distinct multitouch with a fake touch interface don't support all two-finger gestures because the input in transformed to cursor movement on the screen. That is, single-finger gestures on such a device move a cursor, two-finger swipes cause single-finger touch events to occur, and other two-finger gestures trigger the corresponding two-finger touch events. A device that provides a two-finger touch trackpad for cursor movement can support this feature.*/" },
		{ "DisplayName", "FakeTouch MultiTouch Distinct" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app tracks two or more distinct \"fingers\" on a fake touch interface. This is a superset of the android.hardware.faketouch feature. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates distinct tracking of two or more fingers or has an actual touchscreen. Unlike the distinct multitouch defined by android.hardware.touchscreen.multitouch.distinct, input devices that support distinct multitouch with a fake touch interface don't support all two-finger gestures because the input in transformed to cursor movement on the screen. That is, single-finger gestures on such a device move a cursor, two-finger swipes cause single-finger touch events to occur, and other two-finger gestures trigger the corresponding two-finger touch events. A device that provides a two-finger touch trackpad for cursor movement can support this feature." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchDistinct = { "bFakeTouchMultiTouchDistinct", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bFakeTouchMultiTouchDistinct), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchDistinct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchDistinct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchJazzhand_MetaData[] = {
		{ "Category", "Touchscreen" },
		{ "Comment", "/** The app tracks five or more distinct \"fingers\" on a fake touch interface. This is a superset of the android.hardware.faketouch feature. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates distinct tracking of five or more fingers or has an actual touchscreen. Unlike the distinct multitouch defined by android.hardware.touchscreen.multitouch.jazzhand, input devices that support jazzhand multitouch with a fake touch interface don't support all five-finger gestures because the input in transformed to cursor movement on the screen. That is, single-finger gestures on such a device move a cursor, multi-finger gestures cause single-finger touch events to occur, and other multi-finger gestures trigger the corresponding multi-finger touch events. A device that provides a five-finger touch trackpad for cursor movement can support this feature.*/" },
		{ "DisplayName", "FakeTouch MultiTouch JazzHand" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app tracks five or more distinct \"fingers\" on a fake touch interface. This is a superset of the android.hardware.faketouch feature. When declared as required, this feature indicates that the app is compatible with a device only if that device emulates distinct tracking of five or more fingers or has an actual touchscreen. Unlike the distinct multitouch defined by android.hardware.touchscreen.multitouch.jazzhand, input devices that support jazzhand multitouch with a fake touch interface don't support all five-finger gestures because the input in transformed to cursor movement on the screen. That is, single-finger gestures on such a device move a cursor, multi-finger gestures cause single-finger touch events to occur, and other multi-finger gestures trigger the corresponding multi-finger touch events. A device that provides a five-finger touch trackpad for cursor movement can support this feature." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchJazzhand = { "bFakeTouchMultiTouchJazzhand", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bFakeTouchMultiTouchJazzhand), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchJazzhand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchJazzhand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBAccessory_MetaData[] = {
		{ "Category", "USB" },
		{ "Comment", "/** The app behaves as the USB device and connects to USB hosts. */" },
		{ "DisplayName", "USB" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app behaves as the USB device and connects to USB hosts." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBAccessory = { "bUSBAccessory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bUSBAccessory), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBAccessory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBAccessory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBHost_MetaData[] = {
		{ "Category", "USB" },
		{ "Comment", "/** The app uses the USB accessories that are connected to the device. The device serves as the USB host. */" },
		{ "DisplayName", "USB host" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the USB accessories that are connected to the device. The device serves as the USB host." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBHost = { "bUSBHost", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bUSBHost), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFi_MetaData[] = {
		{ "Category", "Wi-Fi" },
		{ "Comment", "/** The app uses 802.11 networking (Wi-Fi) features on the device. */" },
		{ "DisplayName", "Wi-Fi" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses 802.11 networking (Wi-Fi) features on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFi = { "bWiFi", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bWiFi), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFiDirect_MetaData[] = {
		{ "Category", "Wi-Fi" },
		{ "Comment", "/** The app uses the Wi-Fi Direct networking features on the device. */" },
		{ "DisplayName", "Wi-Fi Direct" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses the Wi-Fi Direct networking features on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFiDirect = { "bWiFiDirect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bWiFiDirect), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFiDirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFiDirect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSip_MetaData[] = {
		{ "Category", "Communication" },
		{ "Comment", "/** The app uses Session Initiation Protocol (SIP) services. By using SIP, the app can support internet telephony operations, such as video conferencing and instant messaging. */" },
		{ "DisplayName", "SIP services" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses Session Initiation Protocol (SIP) services. By using SIP, the app can support internet telephony operations, such as video conferencing and instant messaging." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSip = { "bSoftwareSip", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareSip), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSipVoIP_MetaData[] = {
		{ "Category", "Communication" },
		{ "Comment", "/** The app uses SIP-based Voice Over Internet Protocol (VoIP) services. By using VoIP, the app can support real-time internet telephony operations, such as two-way video conferencing. By using this feature, an app implies that it also uses the android.software.sip feature, unless this parent feature is declared with android:required=\"false\". */" },
		{ "DisplayName", "VoIP" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses SIP-based Voice Over Internet Protocol (VoIP) services. By using VoIP, the app can support real-time internet telephony operations, such as two-way video conferencing. By using this feature, an app implies that it also uses the android.software.sip feature, unless this parent feature is declared with android:required=\"false\"." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSipVoIP = { "bSoftwareSipVoIP", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareSipVoIP), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSipVoIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSipVoIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareWebview_MetaData[] = {
		{ "Category", "Communication" },
		{ "Comment", "/** The app displays content from the internet. */" },
		{ "DisplayName", "WebView" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app displays content from the internet." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareWebview = { "bSoftwareWebview", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareWebview), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareWebview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareWebview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareInputMethods_MetaData[] = {
		{ "Category", "Custom Input Methods" },
		{ "Comment", "/** The app uses a new input method, which the developer defines in an InputMethodService. */" },
		{ "DisplayName", "Software Input Methods" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses a new input method, which the developer defines in an InputMethodService." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareInputMethods = { "bSoftwareInputMethods", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareInputMethods), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareInputMethods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareInputMethods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareBackup_MetaData[] = {
		{ "Category", "Device Management" },
		{ "Comment", "/** The app includes logic to handle a backup and restore operation. */" },
		{ "DisplayName", "Backup" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app includes logic to handle a backup and restore operation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareBackup = { "bSoftwareBackup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareBackup), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareBackup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareBackup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareDeviceAdmin_MetaData[] = {
		{ "Category", "Device Management" },
		{ "Comment", "/** The app uses device administrators to enforce a device policy. */" },
		{ "DisplayName", "Device administrators access" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses device administrators to enforce a device policy." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareDeviceAdmin = { "bSoftwareDeviceAdmin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareDeviceAdmin), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareDeviceAdmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareDeviceAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareManagedUsers_MetaData[] = {
		{ "Category", "Device Management" },
		{ "Comment", "/** The app supports secondary users and managed profiles. */" },
		{ "DisplayName", "Managed users" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app supports secondary users and managed profiles." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareManagedUsers = { "bSoftwareManagedUsers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareManagedUsers), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareManagedUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareManagedUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSecurelyRemovesUsers_MetaData[] = {
		{ "Category", "Device Management" },
		{ "Comment", "/** The app can permanently remove users and their associated data. */" },
		{ "DisplayName", "Removing users" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app can permanently remove users and their associated data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSecurelyRemovesUsers = { "bSoftwareSecurelyRemovesUsers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareSecurelyRemovesUsers), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSecurelyRemovesUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSecurelyRemovesUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareVerifiedBoot_MetaData[] = {
		{ "Category", "Device Management" },
		{ "Comment", "/** The app includes logic to handle results from the device's verified boot feature, which detects whether the device's configuration changes during a restart operation. */" },
		{ "DisplayName", "Software verified boot" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app includes logic to handle results from the device's verified boot feature, which detects whether the device's configuration changes during a restart operation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareVerifiedBoot = { "bSoftwareVerifiedBoot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareVerifiedBoot), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareVerifiedBoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareVerifiedBoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareMidi_MetaData[] = {
		{ "Category", "Media Software" },
		{ "Comment", "/** The app connects to musical instruments or outputs sound using the Musical Instrument Digital Interface (MIDI) protocol. */" },
		{ "DisplayName", "MIDI" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app connects to musical instruments or outputs sound using the Musical Instrument Digital Interface (MIDI) protocol." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareMidi = { "bSoftwareMidi", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareMidi), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareMidi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareMidi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwarePrint_MetaData[] = {
		{ "Category", "Media Software" },
		{ "Comment", "/** The app includes commands for printing documents displayed on the device. */" },
		{ "DisplayName", "Printing" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app includes commands for printing documents displayed on the device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwarePrint = { "bSoftwarePrint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwarePrint), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwarePrint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwarePrint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLeanback_MetaData[] = {
		{ "Category", "Media Software" },
		{ "Comment", "/** The app presents a UI that is designed for viewing on a large screen, such as a television. */" },
		{ "DisplayName", "Large screen (television)" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app presents a UI that is designed for viewing on a large screen, such as a television." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLeanback = { "bSoftwareLeanback", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareLeanback), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLeanback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLeanback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveTV_MetaData[] = {
		{ "Category", "Media Software" },
		{ "Comment", "/** The app streams live television programs. */" },
		{ "DisplayName", "Live streaming TV programs" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app streams live television programs." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveTV = { "bSoftwareLiveTV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareLiveTV), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveTV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveTV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareAppWidgets_MetaData[] = {
		{ "Category", "Screen interface" },
		{ "Comment", "/** The app uses or provides App Widgets and should be installed only on devices that include a Home screen or similar location where users can embed App Widgets. */" },
		{ "DisplayName", "App Widgets" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses or provides App Widgets and should be installed only on devices that include a Home screen or similar location where users can embed App Widgets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareAppWidgets = { "bSoftwareAppWidgets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareAppWidgets), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareAppWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareAppWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareHomeScreen_MetaData[] = {
		{ "Category", "Screen interface" },
		{ "Comment", "/** The app behaves as a replacement to the device's Home screen. */" },
		{ "DisplayName", "Home Screen" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app behaves as a replacement to the device's Home screen." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareHomeScreen = { "bSoftwareHomeScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareHomeScreen), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareHomeScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareHomeScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveWallpaper_MetaData[] = {
		{ "Category", "Screen interface" },
		{ "Comment", "/** The app uses or provides wallpapers that include animation. */" },
		{ "DisplayName", "Live Wallpaper" },
		{ "ModuleRelativePath", "Public/AndroidManifestConfiguratorSettings.h" },
		{ "ToolTip", "The app uses or provides wallpapers that include animation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveWallpaper = { "bSoftwareLiveWallpaper", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidManifestConfiguratorSettings, bSoftwareLiveWallpaper), Z_Construct_UEnum_AndroidManifestConfigurator_EFeaturesType, METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveWallpaper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveWallpaper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_TexturesCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bOpenGLAEP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSmallScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNormalScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLargeScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bXLargeScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAnyDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqFiveWayNav,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bReqHardKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqKeyboardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqNavigationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_ReqTouchScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeAutomotive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeTelevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bHardwareTypeWatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFingerprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioLowLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioPro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bAudioMicrophone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bBluetoothLe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraAutofocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraPostProcessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraManualSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraExternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bCameraFull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bConsumerIR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationGPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bLocationNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bNFC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAccelerometer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorAmbientTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorBarometer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorGyroscope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHifi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorHeartrateECG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorRelativeHumidity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSensorStepDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephony,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyCDMA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTelephonyGSM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchDistinct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bTouchscreenMultitouchJazzhand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchDistinct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bFakeTouchMultiTouchJazzhand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBAccessory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bUSBHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bWiFiDirect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSipVoIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareWebview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareInputMethods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareBackup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareDeviceAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareManagedUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareSecurelyRemovesUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareVerifiedBoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareMidi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwarePrint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLeanback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveTV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareAppWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareHomeScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::NewProp_bSoftwareLiveWallpaper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidManifestConfiguratorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::ClassParams = {
		&UAndroidManifestConfiguratorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidManifestConfiguratorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidManifestConfiguratorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidManifestConfiguratorSettings, 1045571822);
	template<> ANDROIDMANIFESTCONFIGURATOR_API UClass* StaticClass<UAndroidManifestConfiguratorSettings>()
	{
		return UAndroidManifestConfiguratorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidManifestConfiguratorSettings(Z_Construct_UClass_UAndroidManifestConfiguratorSettings, &UAndroidManifestConfiguratorSettings::StaticClass, TEXT("/Script/AndroidManifestConfigurator"), TEXT("UAndroidManifestConfiguratorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidManifestConfiguratorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
