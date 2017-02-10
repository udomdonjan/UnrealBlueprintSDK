#include "PlayFabPrivatePCH.h"
#include "PlayFabJsonObject.h"
#include "PlayFabEnums.generated.h"

#pragma once

// PlayFab enums start with "pfenum_" in order to avoid code-name conflicts - For JSON, remove that prefix, and send only the expected portion (the display name is not fetchable when compiled)
static const FString prefix = TEXT("pfenum_");

template <typename EnumType>
static FORCEINLINE bool GetEnumValueFromString(const FString& enumTypeName, const FString& input, EnumType& output)
{
    UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *enumTypeName, true);
    if (!enumPtr)
    {
        output = EnumType(0);
        return false;
    }

    FString fullInput;
    if (!input.StartsWith(*prefix))
        fullInput = prefix + input;
    else
        fullInput = input;
    output = (EnumType)enumPtr->FindEnumIndex(FName(*fullInput));
    return true;
}

template<typename EnumType>
static FORCEINLINE bool GetEnumValueToString(const FString& enumTypeName, const EnumType& input, FString& output)
{
    const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *enumTypeName, true);
    if (!enumPtr)
    {
        output = FString("0");
        return false;
    }

    output = enumPtr->GetEnumName((int32)input);
    if (output.StartsWith(*prefix))
        output.RemoveAt(0, 7, false);
    return true;
}

// Enum for ContinentCode
UENUM(BlueprintType)
enum class EContinentCode : uint8
{
    pfenum_AF UMETA(DisplayName = "AF"),
    pfenum_AN UMETA(DisplayName = "AN"),
    pfenum_AS UMETA(DisplayName = "AS"),
    pfenum_EU UMETA(DisplayName = "EU"),
    pfenum_NA UMETA(DisplayName = "NA"),
    pfenum_OC UMETA(DisplayName = "OC"),
    pfenum_SA UMETA(DisplayName = "SA"),
};

// Enum for CountryCode
UENUM(BlueprintType)
enum class ECountryCode : uint8
{
    pfenum_AF UMETA(DisplayName = "AF"),
    pfenum_AX UMETA(DisplayName = "AX"),
    pfenum_AL UMETA(DisplayName = "AL"),
    pfenum_DZ UMETA(DisplayName = "DZ"),
    pfenum_AS UMETA(DisplayName = "AS"),
    pfenum_AD UMETA(DisplayName = "AD"),
    pfenum_AO UMETA(DisplayName = "AO"),
    pfenum_AI UMETA(DisplayName = "AI"),
    pfenum_AQ UMETA(DisplayName = "AQ"),
    pfenum_AG UMETA(DisplayName = "AG"),
    pfenum_AR UMETA(DisplayName = "AR"),
    pfenum_AM UMETA(DisplayName = "AM"),
    pfenum_AW UMETA(DisplayName = "AW"),
    pfenum_AU UMETA(DisplayName = "AU"),
    pfenum_AT UMETA(DisplayName = "AT"),
    pfenum_AZ UMETA(DisplayName = "AZ"),
    pfenum_BS UMETA(DisplayName = "BS"),
    pfenum_BH UMETA(DisplayName = "BH"),
    pfenum_BD UMETA(DisplayName = "BD"),
    pfenum_BB UMETA(DisplayName = "BB"),
    pfenum_BY UMETA(DisplayName = "BY"),
    pfenum_BE UMETA(DisplayName = "BE"),
    pfenum_BZ UMETA(DisplayName = "BZ"),
    pfenum_BJ UMETA(DisplayName = "BJ"),
    pfenum_BM UMETA(DisplayName = "BM"),
    pfenum_BT UMETA(DisplayName = "BT"),
    pfenum_BO UMETA(DisplayName = "BO"),
    pfenum_BQ UMETA(DisplayName = "BQ"),
    pfenum_BA UMETA(DisplayName = "BA"),
    pfenum_BW UMETA(DisplayName = "BW"),
    pfenum_BV UMETA(DisplayName = "BV"),
    pfenum_BR UMETA(DisplayName = "BR"),
    pfenum_IO UMETA(DisplayName = "IO"),
    pfenum_BN UMETA(DisplayName = "BN"),
    pfenum_BG UMETA(DisplayName = "BG"),
    pfenum_BF UMETA(DisplayName = "BF"),
    pfenum_BI UMETA(DisplayName = "BI"),
    pfenum_KH UMETA(DisplayName = "KH"),
    pfenum_CM UMETA(DisplayName = "CM"),
    pfenum_CA UMETA(DisplayName = "CA"),
    pfenum_CV UMETA(DisplayName = "CV"),
    pfenum_KY UMETA(DisplayName = "KY"),
    pfenum_CF UMETA(DisplayName = "CF"),
    pfenum_TD UMETA(DisplayName = "TD"),
    pfenum_CL UMETA(DisplayName = "CL"),
    pfenum_CN UMETA(DisplayName = "CN"),
    pfenum_CX UMETA(DisplayName = "CX"),
    pfenum_CC UMETA(DisplayName = "CC"),
    pfenum_CO UMETA(DisplayName = "CO"),
    pfenum_KM UMETA(DisplayName = "KM"),
    pfenum_CG UMETA(DisplayName = "CG"),
    pfenum_CD UMETA(DisplayName = "CD"),
    pfenum_CK UMETA(DisplayName = "CK"),
    pfenum_CR UMETA(DisplayName = "CR"),
    pfenum_CI UMETA(DisplayName = "CI"),
    pfenum_HR UMETA(DisplayName = "HR"),
    pfenum_CU UMETA(DisplayName = "CU"),
    pfenum_CW UMETA(DisplayName = "CW"),
    pfenum_CY UMETA(DisplayName = "CY"),
    pfenum_CZ UMETA(DisplayName = "CZ"),
    pfenum_DK UMETA(DisplayName = "DK"),
    pfenum_DJ UMETA(DisplayName = "DJ"),
    pfenum_DM UMETA(DisplayName = "DM"),
    pfenum_DO UMETA(DisplayName = "DO"),
    pfenum_EC UMETA(DisplayName = "EC"),
    pfenum_EG UMETA(DisplayName = "EG"),
    pfenum_SV UMETA(DisplayName = "SV"),
    pfenum_GQ UMETA(DisplayName = "GQ"),
    pfenum_ER UMETA(DisplayName = "ER"),
    pfenum_EE UMETA(DisplayName = "EE"),
    pfenum_ET UMETA(DisplayName = "ET"),
    pfenum_FK UMETA(DisplayName = "FK"),
    pfenum_FO UMETA(DisplayName = "FO"),
    pfenum_FJ UMETA(DisplayName = "FJ"),
    pfenum_FI UMETA(DisplayName = "FI"),
    pfenum_FR UMETA(DisplayName = "FR"),
    pfenum_GF UMETA(DisplayName = "GF"),
    pfenum_PF UMETA(DisplayName = "PF"),
    pfenum_TF UMETA(DisplayName = "TF"),
    pfenum_GA UMETA(DisplayName = "GA"),
    pfenum_GM UMETA(DisplayName = "GM"),
    pfenum_GE UMETA(DisplayName = "GE"),
    pfenum_DE UMETA(DisplayName = "DE"),
    pfenum_GH UMETA(DisplayName = "GH"),
    pfenum_GI UMETA(DisplayName = "GI"),
    pfenum_GR UMETA(DisplayName = "GR"),
    pfenum_GL UMETA(DisplayName = "GL"),
    pfenum_GD UMETA(DisplayName = "GD"),
    pfenum_GP UMETA(DisplayName = "GP"),
    pfenum_GU UMETA(DisplayName = "GU"),
    pfenum_GT UMETA(DisplayName = "GT"),
    pfenum_GG UMETA(DisplayName = "GG"),
    pfenum_GN UMETA(DisplayName = "GN"),
    pfenum_GW UMETA(DisplayName = "GW"),
    pfenum_GY UMETA(DisplayName = "GY"),
    pfenum_HT UMETA(DisplayName = "HT"),
    pfenum_HM UMETA(DisplayName = "HM"),
    pfenum_VA UMETA(DisplayName = "VA"),
    pfenum_HN UMETA(DisplayName = "HN"),
    pfenum_HK UMETA(DisplayName = "HK"),
    pfenum_HU UMETA(DisplayName = "HU"),
    pfenum_IS UMETA(DisplayName = "IS"),
    pfenum_IN UMETA(DisplayName = "IN"),
    pfenum_ID UMETA(DisplayName = "ID"),
    pfenum_IR UMETA(DisplayName = "IR"),
    pfenum_IQ UMETA(DisplayName = "IQ"),
    pfenum_IE UMETA(DisplayName = "IE"),
    pfenum_IM UMETA(DisplayName = "IM"),
    pfenum_IL UMETA(DisplayName = "IL"),
    pfenum_IT UMETA(DisplayName = "IT"),
    pfenum_JM UMETA(DisplayName = "JM"),
    pfenum_JP UMETA(DisplayName = "JP"),
    pfenum_JE UMETA(DisplayName = "JE"),
    pfenum_JO UMETA(DisplayName = "JO"),
    pfenum_KZ UMETA(DisplayName = "KZ"),
    pfenum_KE UMETA(DisplayName = "KE"),
    pfenum_KI UMETA(DisplayName = "KI"),
    pfenum_KP UMETA(DisplayName = "KP"),
    pfenum_KR UMETA(DisplayName = "KR"),
    pfenum_KW UMETA(DisplayName = "KW"),
    pfenum_KG UMETA(DisplayName = "KG"),
    pfenum_LA UMETA(DisplayName = "LA"),
    pfenum_LV UMETA(DisplayName = "LV"),
    pfenum_LB UMETA(DisplayName = "LB"),
    pfenum_LS UMETA(DisplayName = "LS"),
    pfenum_LR UMETA(DisplayName = "LR"),
    pfenum_LY UMETA(DisplayName = "LY"),
    pfenum_LI UMETA(DisplayName = "LI"),
    pfenum_LT UMETA(DisplayName = "LT"),
    pfenum_LU UMETA(DisplayName = "LU"),
    pfenum_MO UMETA(DisplayName = "MO"),
    pfenum_MK UMETA(DisplayName = "MK"),
    pfenum_MG UMETA(DisplayName = "MG"),
    pfenum_MW UMETA(DisplayName = "MW"),
    pfenum_MY UMETA(DisplayName = "MY"),
    pfenum_MV UMETA(DisplayName = "MV"),
    pfenum_ML UMETA(DisplayName = "ML"),
    pfenum_MT UMETA(DisplayName = "MT"),
    pfenum_MH UMETA(DisplayName = "MH"),
    pfenum_MQ UMETA(DisplayName = "MQ"),
    pfenum_MR UMETA(DisplayName = "MR"),
    pfenum_MU UMETA(DisplayName = "MU"),
    pfenum_YT UMETA(DisplayName = "YT"),
    pfenum_MX UMETA(DisplayName = "MX"),
    pfenum_FM UMETA(DisplayName = "FM"),
    pfenum_MD UMETA(DisplayName = "MD"),
    pfenum_MC UMETA(DisplayName = "MC"),
    pfenum_MN UMETA(DisplayName = "MN"),
    pfenum_ME UMETA(DisplayName = "ME"),
    pfenum_MS UMETA(DisplayName = "MS"),
    pfenum_MA UMETA(DisplayName = "MA"),
    pfenum_MZ UMETA(DisplayName = "MZ"),
    pfenum_MM UMETA(DisplayName = "MM"),
    pfenum_NA UMETA(DisplayName = "NA"),
    pfenum_NR UMETA(DisplayName = "NR"),
    pfenum_NP UMETA(DisplayName = "NP"),
    pfenum_NL UMETA(DisplayName = "NL"),
    pfenum_NC UMETA(DisplayName = "NC"),
    pfenum_NZ UMETA(DisplayName = "NZ"),
    pfenum_NI UMETA(DisplayName = "NI"),
    pfenum_NE UMETA(DisplayName = "NE"),
    pfenum_NG UMETA(DisplayName = "NG"),
    pfenum_NU UMETA(DisplayName = "NU"),
    pfenum_NF UMETA(DisplayName = "NF"),
    pfenum_MP UMETA(DisplayName = "MP"),
    pfenum_NO UMETA(DisplayName = "NO"),
    pfenum_OM UMETA(DisplayName = "OM"),
    pfenum_PK UMETA(DisplayName = "PK"),
    pfenum_PW UMETA(DisplayName = "PW"),
    pfenum_PS UMETA(DisplayName = "PS"),
    pfenum_PA UMETA(DisplayName = "PA"),
    pfenum_PG UMETA(DisplayName = "PG"),
    pfenum_PY UMETA(DisplayName = "PY"),
    pfenum_PE UMETA(DisplayName = "PE"),
    pfenum_PH UMETA(DisplayName = "PH"),
    pfenum_PN UMETA(DisplayName = "PN"),
    pfenum_PL UMETA(DisplayName = "PL"),
    pfenum_PT UMETA(DisplayName = "PT"),
    pfenum_PR UMETA(DisplayName = "PR"),
    pfenum_QA UMETA(DisplayName = "QA"),
    pfenum_RE UMETA(DisplayName = "RE"),
    pfenum_RO UMETA(DisplayName = "RO"),
    pfenum_RU UMETA(DisplayName = "RU"),
    pfenum_RW UMETA(DisplayName = "RW"),
    pfenum_BL UMETA(DisplayName = "BL"),
    pfenum_SH UMETA(DisplayName = "SH"),
    pfenum_KN UMETA(DisplayName = "KN"),
    pfenum_LC UMETA(DisplayName = "LC"),
    pfenum_MF UMETA(DisplayName = "MF"),
    pfenum_PM UMETA(DisplayName = "PM"),
    pfenum_VC UMETA(DisplayName = "VC"),
    pfenum_WS UMETA(DisplayName = "WS"),
    pfenum_SM UMETA(DisplayName = "SM"),
    pfenum_ST UMETA(DisplayName = "ST"),
    pfenum_SA UMETA(DisplayName = "SA"),
    pfenum_SN UMETA(DisplayName = "SN"),
    pfenum_RS UMETA(DisplayName = "RS"),
    pfenum_SC UMETA(DisplayName = "SC"),
    pfenum_SL UMETA(DisplayName = "SL"),
    pfenum_SG UMETA(DisplayName = "SG"),
    pfenum_SX UMETA(DisplayName = "SX"),
    pfenum_SK UMETA(DisplayName = "SK"),
    pfenum_SI UMETA(DisplayName = "SI"),
    pfenum_SB UMETA(DisplayName = "SB"),
    pfenum_SO UMETA(DisplayName = "SO"),
    pfenum_ZA UMETA(DisplayName = "ZA"),
    pfenum_GS UMETA(DisplayName = "GS"),
    pfenum_SS UMETA(DisplayName = "SS"),
    pfenum_ES UMETA(DisplayName = "ES"),
    pfenum_LK UMETA(DisplayName = "LK"),
    pfenum_SD UMETA(DisplayName = "SD"),
    pfenum_SR UMETA(DisplayName = "SR"),
    pfenum_SJ UMETA(DisplayName = "SJ"),
    pfenum_SZ UMETA(DisplayName = "SZ"),
    pfenum_SE UMETA(DisplayName = "SE"),
    pfenum_CH UMETA(DisplayName = "CH"),
    pfenum_SY UMETA(DisplayName = "SY"),
    pfenum_TW UMETA(DisplayName = "TW"),
    pfenum_TJ UMETA(DisplayName = "TJ"),
    pfenum_TZ UMETA(DisplayName = "TZ"),
    pfenum_TH UMETA(DisplayName = "TH"),
    pfenum_TL UMETA(DisplayName = "TL"),
    pfenum_TG UMETA(DisplayName = "TG"),
    pfenum_TK UMETA(DisplayName = "TK"),
    pfenum_TO UMETA(DisplayName = "TO"),
    pfenum_TT UMETA(DisplayName = "TT"),
    pfenum_TN UMETA(DisplayName = "TN"),
    pfenum_TR UMETA(DisplayName = "TR"),
    pfenum_TM UMETA(DisplayName = "TM"),
    pfenum_TC UMETA(DisplayName = "TC"),
    pfenum_TV UMETA(DisplayName = "TV"),
    pfenum_UG UMETA(DisplayName = "UG"),
    pfenum_UA UMETA(DisplayName = "UA"),
    pfenum_AE UMETA(DisplayName = "AE"),
    pfenum_GB UMETA(DisplayName = "GB"),
    pfenum_US UMETA(DisplayName = "US"),
    pfenum_UM UMETA(DisplayName = "UM"),
    pfenum_UY UMETA(DisplayName = "UY"),
    pfenum_UZ UMETA(DisplayName = "UZ"),
    pfenum_VU UMETA(DisplayName = "VU"),
    pfenum_VE UMETA(DisplayName = "VE"),
    pfenum_VN UMETA(DisplayName = "VN"),
    pfenum_VG UMETA(DisplayName = "VG"),
    pfenum_VI UMETA(DisplayName = "VI"),
    pfenum_WF UMETA(DisplayName = "WF"),
    pfenum_EH UMETA(DisplayName = "EH"),
    pfenum_YE UMETA(DisplayName = "YE"),
    pfenum_ZM UMETA(DisplayName = "ZM"),
    pfenum_ZW UMETA(DisplayName = "ZW"),
};

// Enum for EffectType
UENUM(BlueprintType)
enum class EEffectType : uint8
{
    pfenum_Allow UMETA(DisplayName = "Allow"),
};

// Enum for GameBuildStatus
UENUM(BlueprintType)
enum class EGameBuildStatus : uint8
{
    pfenum_Available UMETA(DisplayName = "Available"),
    pfenum_Validating UMETA(DisplayName = "Validating"),
    pfenum_InvalidBuildPackage UMETA(DisplayName = "InvalidBuildPackage"),
    pfenum_Processing UMETA(DisplayName = "Processing"),
    pfenum_FailedToProcess UMETA(DisplayName = "FailedToProcess"),
};

// Enum for LoginIdentityProvider
UENUM(BlueprintType)
enum class ELoginIdentityProvider : uint8
{
    pfenum_Unknown UMETA(DisplayName = "Unknown"),
    pfenum_PlayFab UMETA(DisplayName = "PlayFab"),
    pfenum_Custom UMETA(DisplayName = "Custom"),
    pfenum_GameCenter UMETA(DisplayName = "GameCenter"),
    pfenum_GooglePlay UMETA(DisplayName = "GooglePlay"),
    pfenum_Steam UMETA(DisplayName = "Steam"),
    pfenum_XBoxLive UMETA(DisplayName = "XBoxLive"),
    pfenum_PSN UMETA(DisplayName = "PSN"),
    pfenum_Kongregate UMETA(DisplayName = "Kongregate"),
    pfenum_Facebook UMETA(DisplayName = "Facebook"),
    pfenum_IOSDevice UMETA(DisplayName = "IOSDevice"),
    pfenum_AndroidDevice UMETA(DisplayName = "AndroidDevice"),
    pfenum_Twitch UMETA(DisplayName = "Twitch"),
};

// Enum for PushNotificationPlatform
UENUM(BlueprintType)
enum class EPushNotificationPlatform : uint8
{
    pfenum_ApplePushNotificationService UMETA(DisplayName = "ApplePushNotificationService"),
    pfenum_GoogleCloudMessaging UMETA(DisplayName = "GoogleCloudMessaging"),
};

// Enum for Region
UENUM(BlueprintType)
enum class ERegion : uint8
{
    pfenum_USCentral UMETA(DisplayName = "USCentral"),
    pfenum_USEast UMETA(DisplayName = "USEast"),
    pfenum_EUWest UMETA(DisplayName = "EUWest"),
    pfenum_Singapore UMETA(DisplayName = "Singapore"),
    pfenum_Japan UMETA(DisplayName = "Japan"),
    pfenum_Brazil UMETA(DisplayName = "Brazil"),
    pfenum_Australia UMETA(DisplayName = "Australia"),
};

// Enum for ResolutionOutcome
UENUM(BlueprintType)
enum class EResolutionOutcome : uint8
{
    pfenum_Revoke UMETA(DisplayName = "Revoke"),
    pfenum_Reinstate UMETA(DisplayName = "Reinstate"),
    pfenum_Manual UMETA(DisplayName = "Manual"),
};

// Enum for ResultTableNodeType
UENUM(BlueprintType)
enum class EResultTableNodeType : uint8
{
    pfenum_ItemId UMETA(DisplayName = "ItemId"),
    pfenum_TableId UMETA(DisplayName = "TableId"),
};

// Enum for ScheduledTaskType
UENUM(BlueprintType)
enum class EScheduledTaskType : uint8
{
    pfenum_CloudScript UMETA(DisplayName = "CloudScript"),
    pfenum_ActionsOnPlayerSegment UMETA(DisplayName = "ActionsOnPlayerSegment"),
};

// Enum for PfSourceType
UENUM(BlueprintType)
enum class EPfSourceType : uint8
{
    pfenum_Admin UMETA(DisplayName = "Admin"),
    pfenum_BackEnd UMETA(DisplayName = "BackEnd"),
    pfenum_GameClient UMETA(DisplayName = "GameClient"),
    pfenum_GameServer UMETA(DisplayName = "GameServer"),
    pfenum_Partner UMETA(DisplayName = "Partner"),
};

// Enum for StatisticAggregationMethod
UENUM(BlueprintType)
enum class EStatisticAggregationMethod : uint8
{
    pfenum_Last UMETA(DisplayName = "Last"),
    pfenum_Min UMETA(DisplayName = "Min"),
    pfenum_Max UMETA(DisplayName = "Max"),
    pfenum_Sum UMETA(DisplayName = "Sum"),
};

// Enum for StatisticResetIntervalOption
UENUM(BlueprintType)
enum class EStatisticResetIntervalOption : uint8
{
    pfenum_Never UMETA(DisplayName = "Never"),
    pfenum_Hour UMETA(DisplayName = "Hour"),
    pfenum_Day UMETA(DisplayName = "Day"),
    pfenum_Week UMETA(DisplayName = "Week"),
    pfenum_Month UMETA(DisplayName = "Month"),
};

// Enum for StatisticVersionArchivalStatus
UENUM(BlueprintType)
enum class EStatisticVersionArchivalStatus : uint8
{
    pfenum_NotScheduled UMETA(DisplayName = "NotScheduled"),
    pfenum_Scheduled UMETA(DisplayName = "Scheduled"),
    pfenum_Queued UMETA(DisplayName = "Queued"),
    pfenum_InProgress UMETA(DisplayName = "InProgress"),
    pfenum_Complete UMETA(DisplayName = "Complete"),
};

// Enum for TaskInstanceStatus
UENUM(BlueprintType)
enum class ETaskInstanceStatus : uint8
{
    pfenum_Succeeded UMETA(DisplayName = "Succeeded"),
    pfenum_Starting UMETA(DisplayName = "Starting"),
    pfenum_InProgress UMETA(DisplayName = "InProgress"),
    pfenum_Failed UMETA(DisplayName = "Failed"),
    pfenum_Aborted UMETA(DisplayName = "Aborted"),
    pfenum_Pending UMETA(DisplayName = "Pending"),
};

// Enum for UserDataPermission
UENUM(BlueprintType)
enum class EUserDataPermission : uint8
{
    pfenum_Private UMETA(DisplayName = "Private"),
    pfenum_Public UMETA(DisplayName = "Public"),
};

// Enum for CloudScriptRevisionOption
UENUM(BlueprintType)
enum class ECloudScriptRevisionOption : uint8
{
    pfenum_Live UMETA(DisplayName = "Live"),
    pfenum_Latest UMETA(DisplayName = "Latest"),
    pfenum_Specific UMETA(DisplayName = "Specific"),
};

// Enum for GameInstanceState
UENUM(BlueprintType)
enum class EGameInstanceState : uint8
{
    pfenum_Open UMETA(DisplayName = "Open"),
    pfenum_Closed UMETA(DisplayName = "Closed"),
};

// Enum for PlayerConnectionState
UENUM(BlueprintType)
enum class EPlayerConnectionState : uint8
{
    pfenum_Unassigned UMETA(DisplayName = "Unassigned"),
    pfenum_Connecting UMETA(DisplayName = "Connecting"),
    pfenum_Participating UMETA(DisplayName = "Participating"),
    pfenum_Participated UMETA(DisplayName = "Participated"),
};

