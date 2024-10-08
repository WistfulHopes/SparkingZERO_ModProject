#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuAreaNpcData.h"
#include "SSMainMenuAreaSpawnedData.h"
#include "SSMainMenuListWidgetStack.h"
#include "SSMainMenuTransitionCharacterArray.h"
#include "SSMenuSceneController.h"
#include "SSMainMenuController.generated.h"

class ASSCutCameraActor;
class ASSLevelSequenceActor;
class ASSOptionController;
class ASSTraceLocator;
class ASSUiFaderHUD;
class ULevelStreamingDynamic;
class UObject;
class USSDramaticBattleWLibHelpDialog;
class USSMainMenuModeMenu;
class USSMainMenuModeMenuWCT;
class USSMainMenuNetworkManager;
class USSMainMenuSCSelector;
class USSMainMenuSceneDataAsset;
class USSMainMenuSlider;
class USSMainMenuSubModeMenu;
class USSMainMenuSubModeMenuExtra;
class USSMenuDialogManager;
class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSPlayerMatchNetworkManager;
class USSRingMenuUi;
class USSUiWidget;
class USSWaitDialog;

UCLASS(Blueprintable)
class ASSMainMenuController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWaitDialog* WaitDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSlider* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuModeMenu* ModeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuModeMenuWCT* ModeMenuWTC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSubModeMenu* SubModeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSubModeMenuExtra* SubModeMenuExtra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSRingMenuUi* RingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* SCTransitionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSCSelector* ShopCustomSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* ShopCustomSelectorCloser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelStreamingDynamic*> DirectingSeqSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuTransitionCharacterArray> TakeOverAreaCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuSceneArea FocusedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusedSubSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LoadStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> LoadClassesSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> LoadInstancesSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSceneDataAsset* MainMenuSceneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuAreaSpawnedData> SpawnedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuAreaNpcData> NPCList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ASSTraceLocator*> LocatorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuListWidgetStack> OpenedWidgetsFromList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMenuDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSPlayerMatchNetworkManager* PLMNetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSOptionController* OptionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleWLibHelpDialog* TipsDialog;
    
public:
    ASSMainMenuController(const FObjectInitializer& ObjectInitializer);

};

