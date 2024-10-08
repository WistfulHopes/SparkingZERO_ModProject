#pragma once
#include "CoreMinimal.h"
#include "EKoratBranch.h"
#include "SSBattleController.h"
#include "SSPlayerController.h"
#include "SSBattlePlayerController.generated.h"

class ASSActionListController;
class ASSBattleDetailsController;
class ASSBattlePlayerController;
class ASSChameleon;
class ASSDramaticDetailsController;
class ASSGeneralDialogController;
class ASSOptionController;
class ASSTrainingSettingController;
class USSBattlePlayerInfoManager;
class USSBattleTutorialHelpManager;
class USSBlastImpactUi;
class USSCrashImpactBoostUi;
class USSCrashImpactSetUi;
class USSDBEvTriggerUi;
class USSMenuManager;
class USSMenuTextUi;
class USSOperationGuideSet;
class USSPauseManager;
class USSPerformanceIcon;
class USSPowerGaugeSet;
class USSSpeedImpactRapidUi;
class USSSpeedImpactTimingUi;
class USSUiWidget;
class USSWmMainManager;

UCLASS(Blueprintable)
class ASSBattlePlayerController : public ASSPlayerController, public ISSBattleController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugInterfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugExecuteName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPauseManager* PauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPowerGaugeSet* PowerGaugeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactRapidUi* SpeedImpactRapidUi2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpeedImpactTimingUi* SpeedImpactTimingUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCrashImpactSetUi* CrashImpactUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCrashImpactBoostUi* CrashImpactBoostUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBlastImpactUi* BlastImpactUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSDBEvTriggerUi* DBEvTriggerUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSPerformanceIcon* PerformanceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPauseRepeatStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPauseRepeatStepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidgetPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuTextUi* TextAreaUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuTextUi* TextAreaUiBattleSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuTextUi* TextAreaUiMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* TextAreaUiBattleSetupSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* TextAreaUiMainMenuSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* Alert_AreaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* Alert_TimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSWmMainManager* WatchingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattlePlayerInfoManager* PlayerInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSOptionController* OptionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSActionListController* ActionListController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattleDetailsController* BattleDetailsController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticDetailsController* DramaticDetailsController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSTrainingSettingController* TrainingSettingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSGeneralDialogController* GeneralDialogController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSUiWidget*> ShowStartedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSUiWidget*> ShowWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSUiWidget*> HideStartedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTutorialHelpManager* P1TutorialHelpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTutorialHelpManager* P2TutorialHelpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTutorialHelpManager* AnnouncementWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSChameleon* Chameleon;
    
public:
    ASSBattlePlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressedDebugSaveP2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressedDebugSaveP1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressedDebugReplayP2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressedDebugReplayP1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressedDebugLockOnChange() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateWidget(FName InName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowWidget(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraFade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseSpDebugMenuUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void HideWidget(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaySide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSBattlePlayerController* GetMainPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckPadControllEnable(EKoratBranch& OutResult);
    

    // Fix for true pure virtual functions not being implemented
};

