Unreal Blueprints Getting Started Guide
----

This guide will help you make your first API call in Unreal, using the PlayFab Blueprints SDK.

Unreal Project Setup
----

* OS: This guide is written for Windows 10, however steps should be similar for Mac
* This guide is created using Visual Studio 2015, and Unreal Engine 4.13
  * Unreal 4.9 requires Visual Studio 2013 (not 2015), but otherwise the steps are nearly identical
* Download Unreal Engine
  * Register and log in on the Unreal website
    * https://accounts.unrealengine.com/login/index
  * Download the Epic Games Launcher
    * https://www.unrealengine.com/dashboard
    * Open Epic Games Launcher
      * Select the "Unreal Engine" tab, and "Library" from the left-navigation-bar
      * Click "+Add Versions"
      * Select from versions: 4.9, 4.12, or 4.13 and install
        * These are the tested versions, other versions between, or after, are likely to work but not guaranteed
      * Click the "Launch" button, and run Unreal Engine
      * Select all the optons as seen here:
        * New Project tab, C++ sub-tab, No Starter Content
        * Remember your path - referenced as {UeBpLocation} for the rest of this guide
        * ![Unreal image](/Images/Unreal/NewProjectBp.png)
      * This will launch an Unreal Editor window, and Visual Studio
        * Stop, and close everything
* Install the PlayFab Client Plugin into your project
  * Download and extract the PlayFab UnrealBlueprintSdk - Extracted location referenced as {PlayFabSdkLocation} for the rest of this guide
  * https://api.playfab.com/sdks/download/cpp-unreal
  * Open two windows explorer folders, {UeBpLocation} and {PlayFabSdkLocation}
    * In {UeBpLocation}, create a new subfolder called "Plugins", and open it
    * In {PlayFabSdkLocation}, navigate to the {PlayFabSdkLocation}/PlayFabClientSDK/PluginFiles subfolder
    * Select the "PlayFab" folder from {PlayFabSdkLocation}/PlayFabClientSDK/PluginFiles and copy it into {UeBpLocation}/Plugins
    * Navigate back up to {UeBpLocation}, and right-click your "GettingStartedUeBp.uproject" (your .uproject file name will match your project name from earlier)
    * Select "Generate Visual Studio project files"
    * When the popup completes, re-open GettingStartedUeBp.sln in Visual Studio
    * ![Unreal image](/Images/Unreal/GenVsProjBp.png)
* PlayFab Installation Complete!

Set up your first API call
----

This guide will provide the minimum steps to make your first PlayFab API call. Confirmation will be done via an on-screen debug print.

* Start by opening the level blueprint
  * ![Unreal image](/Images/Unreal/LevelBlueprint.jpg)
  * Use the existing "Event BeginPlay" node, and build the following structure:
    * ![Unreal image](/Images/Unreal/LoginBps.png)
* Save the blueprint, and close the blueprint editor window
* Save the level

Finish and Execute
----

* Push the play button
* When you execute this program, you should get the following output:
  * ![Unreal image](/Images/Unreal/Output.png)
* Congratulations, you made your first successful API call!
* Done! Press any key to close

Deconstruct the code
----

This optional last section describes each part of the blueprints above, in detail.

* Event BeginPlay
  * This is an Unreal node that exists by default for a level blueprint.  It triggers the following notes immediately when the level is loaded
* Set Play Fab Settings
  * Use this to set the titleId. Other keys can be set here too, but for this guide, you only need to set titleId.
  * Every PlayFab developer creates a title in Game Manager. When you publish your game, you must code that titleId into your game. This lets the client know how to access the correct data within PlayFab. For most users, just consider it a mandatory step that makes PlayFab work.
* Make ClientLoginWithCustomIDRequest
  * Most PlayFab API methods require input parameters, and those input parameters are packed into a request object
  * Every API method requires a unique request object, with a mix of optional and mandatory parameters
    * For LoginWithCustomIDRequest, there is a mandatory parameter of CustomId, which uniquely identifies a player and CreateAccount, which allows the creation of a new account with this call
* Login with Custom ID
  * This begins the async request to "LoginWithCustomID"
  * For login, most developers will want to use a more appropriate login method
    * See the [PlayFab Login Documentation](https://api.playfab.com/Documentation/Client#Authentication) for a list of all login methods, and input parameters.  Common choices are:
      * [LoginWithAndroidDeviceID](https://api.playfab.com/Documentation/Client/method/LoginWithAndroidDeviceID)
      * [LoginWithIOSDeviceID](https://api.playfab.com/Documentation/Client/method/LoginWithIOSDeviceID)
      * [LoginWithEmailAddress](https://api.playfab.com/Documentation/Client/method/LoginWithEmailAddress)
  * The left-side blueprint pins
    * Blue: Request
      * For every PlayFab API blueprint, this must always receive from a paired Make Request blueprint node
    * Red: "On Success" and "On Failure"
      * You can drag an un-bound red marker to empty space, to create a new custom event for this action.  One of those events, according to circumstances, is then invoked when the async-call returns
    * Cyan: Custom Data
      * Custom Data is just a relay. That object is passed un-touched into the red custom events
      * This isn't terribly useful for blueprints, but it's very useful when invoking API calls directly from C++ (Advanced topic: won't be covered in this guide)
  * The right-side blueprint pins
    * White: the unlabeled first exec pin is executed immediately as the API call is queued (response does not exist yet) - Do not use this pin!
    * White: the second exec pin is labled "On Play Fab Response", and is executed after the async remote call has returned
      * Use this to trigger logic that needs to wait or use the Response
    * Blue: Response
      * This is a Json representation of the result
      * The OnSuccess pin provides a properly typed object with the correct fields pre-built into the blueprint
        * This json field is an older pin which is only maintained for legacy
    * Cyan: Custom Data - Same as Custom Data above
    * Maroon: Successful
      * Legacy boolean which indicates how to safely unpack the legacy Response pin
      * Again, it's better to use the red OnSuccess and OnFailure pins
* OnLoginSuccess and OnLoginFail
  * The names of these modules are optional, and should be different for every API call
  * Described above, they attach to the red pins of PlayFab API calls, and allow you to process success and failure for those calls.
  * The OnSuccess/Result pin:
    * The result pin will contain the requested information, according to the API called
  * Break PlayFab Result (Not displayed, the only valid connection for the OnSuccess/Result pin)
    * If you drag the Result pin from OnSuccess, it'll create a Break-Result blueprint.  This blueprint is used to examine the response from any API call
  * The OnFailure/Error pin
    * Always connects to a Break PlayFabError blueprint
    * Contains some information about why your API call failed
    * Why API calls fail (In order of likelihood)
      * PlayFabSettings.TitleId is not set.  If you forget to set titleId to your title, then nothing will work.
      * Request parameters.  If you have not provided the correct or required information for a particular API call, then it will fail.  See error.errorMessage, error.errorDetails, or error.GenerateErrorReport() for more info.
      * Device connectivity issue.  Cell-phones lose/regain connectivity constantly, and so any API call at any time can fail randomly, and then work immediately after.  Going into a tunnel can disconnect you completely.
      * PlayFab server issue.  As with all software, there can be issues.  See our [release notes](https://api.playfab.com/releaseNotes/) for updates.
      * The internet is not 100% reliable.  Sometimes the message is corrupted or fails to reach the PlayFab server.
    * If you are having difficulty debugging an issue, and the information within the error information is not sufficient, please visit us on our [forums](https://community.playfab.com/index.html)
* Prints and Append nodes
  * Just part of the example, giving you some on-screen feedback about what's happening
  * Most examples will extract and utilize the data, rather than just printing
