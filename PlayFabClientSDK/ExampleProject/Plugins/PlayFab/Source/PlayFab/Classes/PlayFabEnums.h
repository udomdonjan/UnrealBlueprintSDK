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

// Enum for MatchmakeStatus
UENUM(BlueprintType)
enum class EMatchmakeStatus : uint8
{
    pfenum_Complete UMETA(DisplayName = "Complete"),
    pfenum_Waiting UMETA(DisplayName = "Waiting"),
    pfenum_GameNotFound UMETA(DisplayName = "GameNotFound"),
    pfenum_NoAvailableSlots UMETA(DisplayName = "NoAvailableSlots"),
    pfenum_SessionClosed UMETA(DisplayName = "SessionClosed"),
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

// Enum for TradeStatus
UENUM(BlueprintType)
enum class ETradeStatus : uint8
{
    pfenum_Invalid UMETA(DisplayName = "Invalid"),
    pfenum_Opening UMETA(DisplayName = "Opening"),
    pfenum_Open UMETA(DisplayName = "Open"),
    pfenum_Accepting UMETA(DisplayName = "Accepting"),
    pfenum_Accepted UMETA(DisplayName = "Accepted"),
    pfenum_Filled UMETA(DisplayName = "Filled"),
    pfenum_Cancelled UMETA(DisplayName = "Cancelled"),
};

// Enum for TransactionStatus
UENUM(BlueprintType)
enum class ETransactionStatus : uint8
{
    pfenum_CreateCart UMETA(DisplayName = "CreateCart"),
    pfenum_Init UMETA(DisplayName = "Init"),
    pfenum_Approved UMETA(DisplayName = "Approved"),
    pfenum_Succeeded UMETA(DisplayName = "Succeeded"),
    pfenum_FailedByProvider UMETA(DisplayName = "FailedByProvider"),
    pfenum_DisputePending UMETA(DisplayName = "DisputePending"),
    pfenum_RefundPending UMETA(DisplayName = "RefundPending"),
    pfenum_Refunded UMETA(DisplayName = "Refunded"),
    pfenum_RefundFailed UMETA(DisplayName = "RefundFailed"),
    pfenum_ChargedBack UMETA(DisplayName = "ChargedBack"),
    pfenum_FailedByUber UMETA(DisplayName = "FailedByUber"),
    pfenum_FailedByPlayFab UMETA(DisplayName = "FailedByPlayFab"),
    pfenum_Revoked UMETA(DisplayName = "Revoked"),
    pfenum_TradePending UMETA(DisplayName = "TradePending"),
    pfenum_Traded UMETA(DisplayName = "Traded"),
    pfenum_Upgraded UMETA(DisplayName = "Upgraded"),
    pfenum_StackPending UMETA(DisplayName = "StackPending"),
    pfenum_Stacked UMETA(DisplayName = "Stacked"),
    pfenum_Other UMETA(DisplayName = "Other"),
    pfenum_Failed UMETA(DisplayName = "Failed"),
};

// Enum for UserDataPermission
UENUM(BlueprintType)
enum class EUserDataPermission : uint8
{
    pfenum_Private UMETA(DisplayName = "Private"),
    pfenum_Public UMETA(DisplayName = "Public"),
};

