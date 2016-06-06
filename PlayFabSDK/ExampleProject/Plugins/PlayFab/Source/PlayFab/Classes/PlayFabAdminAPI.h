#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated header file for the UE4 PlayFab plugin.
// This header file contains the function definitions.
//
// API: Admin
// SDK Version: 0.0.160606
//////////////////////////////////////////////////////////////////////////////////////////////

#include "OnlineBlueprintCallProxyBase.h"
#include "PlayFabBaseModel.h"
#include "PlayFabAdminModels.h"
#include "PlayFabAdminAPI.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayFabAdminRequestCompleted, FPlayFabBaseModel, response, UObject*, customData, bool, successful);

UCLASS(Blueprintable, BlueprintType)
class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
{
    GENERATED_UCLASS_BODY()

public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, error, UObject*, customData);

    UPROPERTY(BlueprintAssignable)
        FOnPlayFabAdminRequestCompleted OnPlayFabResponse;

    /** Set the Request Json object */
    void SetRequestObject(UPlayFabJsonObject* JsonObject);

    /** Get the Response Json object */
    UPlayFabJsonObject* GetResponseObject();

    /** Applies percent-encoding to text */
    static FString PercentEncode(const FString& Text);

    /** Reset saved response data */
    void ResetResponseData();

    /** UOnlineBlueprintCallProxyBase interface */
    virtual void Activate() override;

    //////////////////////////////////////////////////////////////////////////
    // Generated PlayFab Admin API Functions
    //////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////
    // Account Management
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserAccountInfo, FAdminLookupUserAccountInfoResult, result, UObject*, customData);

    /** Retrieves the relevant details for a specified user, based upon a match against a supplied unique identifier */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserAccountInfo(FAdminLookupUserAccountInfoRequest request,
            FDelegateOnSuccessGetUserAccountInfo onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserAccountInfo(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetUsers, FAdminBlankResult, result, UObject*, customData);

    /** Resets all title-specific information about a particular account, including user data, virtual currency balances, inventory, purchase history, and statistics */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ResetUsers(FAdminResetUsersRequest request,
            FDelegateOnSuccessResetUsers onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperResetUsers(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendAccountRecoveryEmail, FAdminSendAccountRecoveryEmailResult, result, UObject*, customData);

    /** Forces an email to be sent to the registered email address for the specified account, with a link allowing the user to change the password */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SendAccountRecoveryEmail(FAdminSendAccountRecoveryEmailRequest request,
            FDelegateOnSuccessSendAccountRecoveryEmail onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSendAccountRecoveryEmail(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserTitleDisplayName, FAdminUpdateUserTitleDisplayNameResult, result, UObject*, customData);

    /** Updates the title specific display name for a user */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserTitleDisplayName(FAdminUpdateUserTitleDisplayNameRequest request,
            FDelegateOnSuccessUpdateUserTitleDisplayName onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Account Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserTitleDisplayName(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Player Data Management
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreatePlayerStatisticDefinition, FAdminCreatePlayerStatisticDefinitionResult, result, UObject*, customData);

    /** Adds a new player statistic configuration to the title, optionally allowing the developer to specify a reset interval and an aggregation method. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* CreatePlayerStatisticDefinition(FAdminCreatePlayerStatisticDefinitionRequest request,
            FDelegateOnSuccessCreatePlayerStatisticDefinition onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperCreatePlayerStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteUsers, FAdminDeleteUsersResult, result, UObject*, customData);

    /** Deletes the users for the provided game. Deletes custom data, all account linkages, and statistics. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* DeleteUsers(FAdminDeleteUsersRequest request,
            FDelegateOnSuccessDeleteUsers onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperDeleteUsers(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDataReport, FAdminGetDataReportResult, result, UObject*, customData);

    /** Retrieves a download URL for the requested report */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetDataReport(FAdminGetDataReportRequest request,
            FDelegateOnSuccessGetDataReport onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetDataReport(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticDefinitions, FAdminGetPlayerStatisticDefinitionsResult, result, UObject*, customData);

    /** Retrieves the configuration information for all player statistics defined in the title, regardless of whether they have a reset interval. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetPlayerStatisticDefinitions(FAdminGetPlayerStatisticDefinitionsRequest request,
            FDelegateOnSuccessGetPlayerStatisticDefinitions onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetPlayerStatisticDefinitions(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticVersions, FAdminGetPlayerStatisticVersionsResult, result, UObject*, customData);

    /** Retrieves the information on the available versions of the specified statistic. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetPlayerStatisticVersions(FAdminGetPlayerStatisticVersionsRequest request,
            FDelegateOnSuccessGetPlayerStatisticVersions onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetPlayerStatisticVersions(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the title-specific custom data for the user which is readable and writable by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInternalData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the title-specific custom data for the user which cannot be accessed by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserInternalData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserInternalData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the publisher-specific custom data for the user which is readable and writable by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserPublisherData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserPublisherData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherInternalData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the publisher-specific custom data for the user which cannot be accessed by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserPublisherInternalData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserPublisherInternalData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherReadOnlyData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the publisher-specific custom data for the user which can only be read by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserPublisherReadOnlyData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserPublisherReadOnlyData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserReadOnlyData, FAdminGetUserDataResult, result, UObject*, customData);

    /** Retrieves the title-specific custom data for the user which can only be read by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserReadOnlyData(FAdminGetUserDataRequest request,
            FDelegateOnSuccessGetUserReadOnlyData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessIncrementPlayerStatisticVersion, FAdminIncrementPlayerStatisticVersionResult, result, UObject*, customData);

    /** Resets the indicated statistic, removing all player entries for it and backing up the old values. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* IncrementPlayerStatisticVersion(FAdminIncrementPlayerStatisticVersionRequest request,
            FDelegateOnSuccessIncrementPlayerStatisticVersion onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperIncrementPlayerStatisticVersion(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetUserStatistics, FAdminResetUserStatisticsResult, result, UObject*, customData);

    /** Completely removes all statistics for the specified user, for the current game */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ResetUserStatistics(FAdminResetUserStatisticsRequest request,
            FDelegateOnSuccessResetUserStatistics onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperResetUserStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerStatisticDefinition, FAdminUpdatePlayerStatisticDefinitionResult, result, UObject*, customData);

    /** Updates a player statistic configuration for the title, optionally allowing the developer to specify a reset interval. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdatePlayerStatisticDefinition(FAdminUpdatePlayerStatisticDefinitionRequest request,
            FDelegateOnSuccessUpdatePlayerStatisticDefinition onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdatePlayerStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the title-specific custom data for the user which is readable and writable by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserData(FAdminUpdateUserDataRequest request,
            FDelegateOnSuccessUpdateUserData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInternalData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the title-specific custom data for the user which cannot be accessed by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserInternalData(FAdminUpdateUserInternalDataRequest request,
            FDelegateOnSuccessUpdateUserInternalData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the publisher-specific custom data for the user which is readable and writable by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserPublisherData(FAdminUpdateUserDataRequest request,
            FDelegateOnSuccessUpdateUserPublisherData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherInternalData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the publisher-specific custom data for the user which cannot be accessed by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserPublisherInternalData(FAdminUpdateUserInternalDataRequest request,
            FDelegateOnSuccessUpdateUserPublisherInternalData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherReadOnlyData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the publisher-specific custom data for the user which can only be read by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserPublisherReadOnlyData(FAdminUpdateUserDataRequest request,
            FDelegateOnSuccessUpdateUserPublisherReadOnlyData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserReadOnlyData, FAdminUpdateUserDataResult, result, UObject*, customData);

    /** Updates the title-specific custom data for the user which can only be read by the client */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateUserReadOnlyData(FAdminUpdateUserDataRequest request,
            FDelegateOnSuccessUpdateUserReadOnlyData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Title-Wide Data Management
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddNews, FAdminAddNewsResult, result, UObject*, customData);

    /** Adds a new news item to the title's news feed */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* AddNews(FAdminAddNewsRequest request,
            FDelegateOnSuccessAddNews onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperAddNews(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddVirtualCurrencyTypes, FAdminBlankResult, result, UObject*, customData);

    /** Adds one or more virtual currencies to the set defined for the title. Virtual Currencies have a maximum value of 2,147,483,647 when granted to a player. Any value over that will be discarded. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* AddVirtualCurrencyTypes(FAdminAddVirtualCurrencyTypesRequest request,
            FDelegateOnSuccessAddVirtualCurrencyTypes onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperAddVirtualCurrencyTypes(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogItems, FAdminGetCatalogItemsResult, result, UObject*, customData);

    /** Retrieves the specified version of the title's catalog of virtual goods, including all defined properties */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetCatalogItems(FAdminGetCatalogItemsRequest request,
            FDelegateOnSuccessGetCatalogItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublisherData, FAdminGetPublisherDataResult, result, UObject*, customData);

    /** Retrieves the key-value store of custom publisher settings */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetPublisherData(FAdminGetPublisherDataRequest request,
            FDelegateOnSuccessGetPublisherData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRandomResultTables, FAdminGetRandomResultTablesResult, result, UObject*, customData);

    /** Retrieves the random drop table configuration for the title */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetRandomResultTables(FAdminGetRandomResultTablesRequest request,
            FDelegateOnSuccessGetRandomResultTables onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetRandomResultTables(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreItems, FAdminGetStoreItemsResult, result, UObject*, customData);

    /** Retrieves the set of items defined for the specified store, including all prices defined */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetStoreItems(FAdminGetStoreItemsRequest request,
            FDelegateOnSuccessGetStoreItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleData, FAdminGetTitleDataResult, result, UObject*, customData);

    /** Retrieves the key-value store of custom title settings */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetTitleData(FAdminGetTitleDataRequest request,
            FDelegateOnSuccessGetTitleData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListVirtualCurrencyTypes, FAdminListVirtualCurrencyTypesResult, result, UObject*, customData);

    /** Retuns the list of all defined virtual currencies for the title */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ListVirtualCurrencyTypes(FAdminListVirtualCurrencyTypesRequest request,
            FDelegateOnSuccessListVirtualCurrencyTypes onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperListVirtualCurrencyTypes(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetCatalogItems, FAdminUpdateCatalogItemsResult, result, UObject*, customData);

    /** Creates the catalog configuration of all virtual goods for the specified catalog version */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetCatalogItems(FAdminUpdateCatalogItemsRequest request,
            FDelegateOnSuccessSetCatalogItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetStoreItems, FAdminUpdateStoreItemsResult, result, UObject*, customData);

    /** Sets all the items in one virtual store */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetStoreItems(FAdminUpdateStoreItemsRequest request,
            FDelegateOnSuccessSetStoreItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleData, FAdminSetTitleDataResult, result, UObject*, customData);

    /** Creates and updates the key-value store of custom title settings */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetTitleData(FAdminSetTitleDataRequest request,
            FDelegateOnSuccessSetTitleData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetupPushNotification, FAdminSetupPushNotificationResult, result, UObject*, customData);

    /** Sets the Amazon Resource Name (ARN) for iOS and Android push notifications. Documentation on the exact restrictions can be found at: http://docs.aws.amazon.com/sns/latest/api/API_CreatePlatformApplication.html. Currently, Amazon device Messaging is not supported. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetupPushNotification(FAdminSetupPushNotificationRequest request,
            FDelegateOnSuccessSetupPushNotification onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetupPushNotification(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCatalogItems, FAdminUpdateCatalogItemsResult, result, UObject*, customData);

    /** Updates the catalog configuration for virtual goods in the specified catalog version */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateCatalogItems(FAdminUpdateCatalogItemsRequest request,
            FDelegateOnSuccessUpdateCatalogItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateRandomResultTables, FAdminUpdateRandomResultTablesResult, result, UObject*, customData);

    /** Updates the random drop table configuration for the title */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateRandomResultTables(FAdminUpdateRandomResultTablesRequest request,
            FDelegateOnSuccessUpdateRandomResultTables onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateRandomResultTables(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateStoreItems, FAdminUpdateStoreItemsResult, result, UObject*, customData);

    /** Updates an existing virtual item store with new or modified items */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateStoreItems(FAdminUpdateStoreItemsRequest request,
            FDelegateOnSuccessUpdateStoreItems onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Title-Wide Data Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Player Item Management
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult, result, UObject*, customData);

    /** Increments the specified virtual currency by the stated amount */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* AddUserVirtualCurrency(FAdminAddUserVirtualCurrencyRequest request,
            FDelegateOnSuccessAddUserVirtualCurrency onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperAddUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInventory, FAdminGetUserInventoryResult, result, UObject*, customData);

    /** Retrieves the specified user's current inventory of virtual goods */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetUserInventory(FAdminGetUserInventoryRequest request,
            FDelegateOnSuccessGetUserInventory onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetUserInventory(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUsers, FAdminGrantItemsToUsersResult, result, UObject*, customData);

    /** Adds the specified items to the specified user inventories */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GrantItemsToUsers(FAdminGrantItemsToUsersRequest request,
            FDelegateOnSuccessGrantItemsToUsers onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGrantItemsToUsers(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItem, FAdminRevokeInventoryResult, result, UObject*, customData);

    /** Revokes access to an item in a user's inventory */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* RevokeInventoryItem(FAdminRevokeInventoryItemRequest request,
            FDelegateOnSuccessRevokeInventoryItem onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperRevokeInventoryItem(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult, result, UObject*, customData);

    /** Decrements the specified virtual currency by the stated amount */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SubtractUserVirtualCurrency(FAdminSubtractUserVirtualCurrencyRequest request,
            FDelegateOnSuccessSubtractUserVirtualCurrency onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Player Item Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSubtractUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Matchmaking APIs
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatchmakerGameInfo, FAdminGetMatchmakerGameInfoResult, result, UObject*, customData);

    /** Retrieves the details for a specific completed session, including links to standard out and standard error logs */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetMatchmakerGameInfo(FAdminGetMatchmakerGameInfoRequest request,
            FDelegateOnSuccessGetMatchmakerGameInfo onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetMatchmakerGameInfo(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatchmakerGameModes, FAdminGetMatchmakerGameModesResult, result, UObject*, customData);

    /** Retrieves the details of defined game modes for the specified game server executable */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetMatchmakerGameModes(FAdminGetMatchmakerGameModesRequest request,
            FDelegateOnSuccessGetMatchmakerGameModes onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetMatchmakerGameModes(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyMatchmakerGameModes, FAdminModifyMatchmakerGameModesResult, result, UObject*, customData);

    /** Updates the game server mode details for the specified game server executable */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ModifyMatchmakerGameModes(FAdminModifyMatchmakerGameModesRequest request,
            FDelegateOnSuccessModifyMatchmakerGameModes onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperModifyMatchmakerGameModes(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Custom Server Management
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddServerBuild, FAdminAddServerBuildResult, result, UObject*, customData);

    /** Adds the game server executable specified (previously uploaded - see GetServerBuildUploadUrl) to the set of those a client is permitted to request in a call to StartGame */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* AddServerBuild(FAdminAddServerBuildRequest request,
            FDelegateOnSuccessAddServerBuild onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperAddServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerBuildInfo, FAdminGetServerBuildInfoResult, result, UObject*, customData);

    /** Retrieves the build details for the specified game server executable */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetServerBuildInfo(FAdminGetServerBuildInfoRequest request,
            FDelegateOnSuccessGetServerBuildInfo onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetServerBuildInfo(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerBuildUploadUrl, FAdminGetServerBuildUploadURLResult, result, UObject*, customData);

    /** Retrieves the pre-authorized URL for uploading a game server package containing a build (does not enable the build for use - see AddServerBuild) */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetServerBuildUploadUrl(FAdminGetServerBuildUploadURLRequest request,
            FDelegateOnSuccessGetServerBuildUploadUrl onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetServerBuildUploadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListServerBuilds, FAdminListBuildsResult, result, UObject*, customData);

    /** Retrieves the build details for all game server executables which are currently defined for the title */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ListServerBuilds(FAdminListBuildsRequest request,
            FDelegateOnSuccessListServerBuilds onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperListServerBuilds(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyServerBuild, FAdminModifyServerBuildResult, result, UObject*, customData);

    /** Updates the build details for the specified game server executable */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ModifyServerBuild(FAdminModifyServerBuildRequest request,
            FDelegateOnSuccessModifyServerBuild onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperModifyServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveServerBuild, FAdminRemoveServerBuildResult, result, UObject*, customData);

    /** Removes the game server executable specified from the set of those a client is permitted to request in a call to StartGame */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* RemoveServerBuild(FAdminRemoveServerBuildRequest request,
            FDelegateOnSuccessRemoveServerBuild onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Custom Server Management ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperRemoveServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Shared Group Data
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublisherData, FAdminSetPublisherDataResult, result, UObject*, customData);

    /** Updates the key-value store of custom publisher settings */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Shared Group Data ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetPublisherData(FAdminSetPublisherDataRequest request,
            FDelegateOnSuccessSetPublisherData onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Shared Group Data ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Server-Side Cloud Script
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCloudScriptRevision, FAdminGetCloudScriptRevisionResult, result, UObject*, customData);

    /** Gets the contents and information of a specific Cloud Script revision. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetCloudScriptRevision(FAdminGetCloudScriptRevisionRequest request,
            FDelegateOnSuccessGetCloudScriptRevision onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetCloudScriptRevision(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCloudScriptVersions, FAdminGetCloudScriptVersionsResult, result, UObject*, customData);

    /** Lists all the current cloud script versions. For each version, information about the current published and latest revisions is also listed. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetCloudScriptVersions(FAdminGetCloudScriptVersionsRequest request,
            FDelegateOnSuccessGetCloudScriptVersions onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetCloudScriptVersions(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublishedRevision, FAdminSetPublishedRevisionResult, result, UObject*, customData);

    /** Sets the currently published revision of a title Cloud Script */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* SetPublishedRevision(FAdminSetPublishedRevisionRequest request,
            FDelegateOnSuccessSetPublishedRevision onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperSetPublishedRevision(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCloudScript, FAdminUpdateCloudScriptResult, result, UObject*, customData);

    /** Creates a new Cloud Script revision and uploads source code to it. Note that at this time, only one file should be submitted in the revision. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* UpdateCloudScript(FAdminUpdateCloudScriptRequest request,
            FDelegateOnSuccessUpdateCloudScript onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Server-Side Cloud Script ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperUpdateCloudScript(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Content
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteContent, FAdminBlankResult, result, UObject*, customData);

    /** Delete a content file from the title */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* DeleteContent(FAdminDeleteContentRequest request,
            FDelegateOnSuccessDeleteContent onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperDeleteContent(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentList, FAdminGetContentListResult, result, UObject*, customData);

    /** List all contents of the title and get statistics such as size */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetContentList(FAdminGetContentListRequest request,
            FDelegateOnSuccessGetContentList onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetContentList(FPlayFabBaseModel response, UObject* customData, bool successful);

    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentUploadUrl, FAdminGetContentUploadUrlResult, result, UObject*, customData);

    /** Retrieves the pre-signed URL for uploading a content file. A subsequent HTTP PUT to the returned URL uploads the content. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* GetContentUploadUrl(FAdminGetContentUploadUrlRequest request,
            FDelegateOnSuccessGetContentUploadUrl onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Content ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperGetContentUploadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);


    ///////////////////////////////////////////////////////
    // Characters
    //////////////////////////////////////////////////////
    // callbacks
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetCharacterStatistics, FAdminResetCharacterStatisticsResult, result, UObject*, customData);

    /** Completely removes all statistics for the specified character, for the current game */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Characters ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabAdminAPI* ResetCharacterStatistics(FAdminResetCharacterStatisticsRequest request,
            FDelegateOnSuccessResetCharacterStatistics onSuccess,
            FDelegateOnFailurePlayFabError onFailure, UObject* customData);

    // Implements FOnPlayFabAdminRequestCompleted
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Admin | Characters ", meta = (BlueprintInternalUseOnly = "true"))
        void HelperResetCharacterStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);



    /** PlayFab Request Info */
    FString PlayFabRequestURL;
    bool useSecretKey = false;
    bool useSessionTicket = false;
    bool cloudScript = false;
    bool isLoginRequest = false;

    /** Is the response valid JSON? */
    bool bIsValidJsonResponse;
    FString ResponseContent;
    int32 ResponseCode;
    UObject* customData;

    FDelegateOnFailurePlayFabError OnFailure;
    FDelegateOnSuccessGetUserAccountInfo OnSuccessGetUserAccountInfo;
    FDelegateOnSuccessResetUsers OnSuccessResetUsers;
    FDelegateOnSuccessSendAccountRecoveryEmail OnSuccessSendAccountRecoveryEmail;
    FDelegateOnSuccessUpdateUserTitleDisplayName OnSuccessUpdateUserTitleDisplayName;
    FDelegateOnSuccessCreatePlayerStatisticDefinition OnSuccessCreatePlayerStatisticDefinition;
    FDelegateOnSuccessDeleteUsers OnSuccessDeleteUsers;
    FDelegateOnSuccessGetDataReport OnSuccessGetDataReport;
    FDelegateOnSuccessGetPlayerStatisticDefinitions OnSuccessGetPlayerStatisticDefinitions;
    FDelegateOnSuccessGetPlayerStatisticVersions OnSuccessGetPlayerStatisticVersions;
    FDelegateOnSuccessGetUserData OnSuccessGetUserData;
    FDelegateOnSuccessGetUserInternalData OnSuccessGetUserInternalData;
    FDelegateOnSuccessGetUserPublisherData OnSuccessGetUserPublisherData;
    FDelegateOnSuccessGetUserPublisherInternalData OnSuccessGetUserPublisherInternalData;
    FDelegateOnSuccessGetUserPublisherReadOnlyData OnSuccessGetUserPublisherReadOnlyData;
    FDelegateOnSuccessGetUserReadOnlyData OnSuccessGetUserReadOnlyData;
    FDelegateOnSuccessIncrementPlayerStatisticVersion OnSuccessIncrementPlayerStatisticVersion;
    FDelegateOnSuccessResetUserStatistics OnSuccessResetUserStatistics;
    FDelegateOnSuccessUpdatePlayerStatisticDefinition OnSuccessUpdatePlayerStatisticDefinition;
    FDelegateOnSuccessUpdateUserData OnSuccessUpdateUserData;
    FDelegateOnSuccessUpdateUserInternalData OnSuccessUpdateUserInternalData;
    FDelegateOnSuccessUpdateUserPublisherData OnSuccessUpdateUserPublisherData;
    FDelegateOnSuccessUpdateUserPublisherInternalData OnSuccessUpdateUserPublisherInternalData;
    FDelegateOnSuccessUpdateUserPublisherReadOnlyData OnSuccessUpdateUserPublisherReadOnlyData;
    FDelegateOnSuccessUpdateUserReadOnlyData OnSuccessUpdateUserReadOnlyData;
    FDelegateOnSuccessAddNews OnSuccessAddNews;
    FDelegateOnSuccessAddVirtualCurrencyTypes OnSuccessAddVirtualCurrencyTypes;
    FDelegateOnSuccessGetCatalogItems OnSuccessGetCatalogItems;
    FDelegateOnSuccessGetPublisherData OnSuccessGetPublisherData;
    FDelegateOnSuccessGetRandomResultTables OnSuccessGetRandomResultTables;
    FDelegateOnSuccessGetStoreItems OnSuccessGetStoreItems;
    FDelegateOnSuccessGetTitleData OnSuccessGetTitleData;
    FDelegateOnSuccessListVirtualCurrencyTypes OnSuccessListVirtualCurrencyTypes;
    FDelegateOnSuccessSetCatalogItems OnSuccessSetCatalogItems;
    FDelegateOnSuccessSetStoreItems OnSuccessSetStoreItems;
    FDelegateOnSuccessSetTitleData OnSuccessSetTitleData;
    FDelegateOnSuccessSetupPushNotification OnSuccessSetupPushNotification;
    FDelegateOnSuccessUpdateCatalogItems OnSuccessUpdateCatalogItems;
    FDelegateOnSuccessUpdateRandomResultTables OnSuccessUpdateRandomResultTables;
    FDelegateOnSuccessUpdateStoreItems OnSuccessUpdateStoreItems;
    FDelegateOnSuccessAddUserVirtualCurrency OnSuccessAddUserVirtualCurrency;
    FDelegateOnSuccessGetUserInventory OnSuccessGetUserInventory;
    FDelegateOnSuccessGrantItemsToUsers OnSuccessGrantItemsToUsers;
    FDelegateOnSuccessRevokeInventoryItem OnSuccessRevokeInventoryItem;
    FDelegateOnSuccessSubtractUserVirtualCurrency OnSuccessSubtractUserVirtualCurrency;
    FDelegateOnSuccessGetMatchmakerGameInfo OnSuccessGetMatchmakerGameInfo;
    FDelegateOnSuccessGetMatchmakerGameModes OnSuccessGetMatchmakerGameModes;
    FDelegateOnSuccessModifyMatchmakerGameModes OnSuccessModifyMatchmakerGameModes;
    FDelegateOnSuccessAddServerBuild OnSuccessAddServerBuild;
    FDelegateOnSuccessGetServerBuildInfo OnSuccessGetServerBuildInfo;
    FDelegateOnSuccessGetServerBuildUploadUrl OnSuccessGetServerBuildUploadUrl;
    FDelegateOnSuccessListServerBuilds OnSuccessListServerBuilds;
    FDelegateOnSuccessModifyServerBuild OnSuccessModifyServerBuild;
    FDelegateOnSuccessRemoveServerBuild OnSuccessRemoveServerBuild;
    FDelegateOnSuccessSetPublisherData OnSuccessSetPublisherData;
    FDelegateOnSuccessGetCloudScriptRevision OnSuccessGetCloudScriptRevision;
    FDelegateOnSuccessGetCloudScriptVersions OnSuccessGetCloudScriptVersions;
    FDelegateOnSuccessSetPublishedRevision OnSuccessSetPublishedRevision;
    FDelegateOnSuccessUpdateCloudScript OnSuccessUpdateCloudScript;
    FDelegateOnSuccessDeleteContent OnSuccessDeleteContent;
    FDelegateOnSuccessGetContentList OnSuccessGetContentList;
    FDelegateOnSuccessGetContentUploadUrl OnSuccessGetContentUploadUrl;
    FDelegateOnSuccessResetCharacterStatistics OnSuccessResetCharacterStatistics;

private:
    /** Internal bind function for the IHTTPRequest::OnProcessRequestCompleted() event */
    void OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

protected:
    /** Internal request data stored as JSON */
    UPROPERTY()
        UPlayFabJsonObject* RequestJsonObj;

    /** Response data stored as JSON */
    UPROPERTY()
        UPlayFabJsonObject* ResponseJsonObj;

    /** Mapping of header section to values. Used to generate final header string for request */
    TMap<FString, FString> RequestHeaders;
};
