#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "BattleImpactLevelSequenceParams.h"
#include "EBattleImpactType.h"
#include "ECameraSideBySideMode.h"
#include "ECharacterVoiceStatus.h"
#include "EKoratAnimType.h"
#include "EKoratBattleDirectingActivate.h"
#include "EKoratDoUntil.h"
#include "EKoratLoop.h"
#include "ESSFlowConditionsJudgmentType.h"
#include "ESSWarpTargetType.h"
#include "EWarpGroupType.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataChangeCharacterActionDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "KoratRebindDescription.h"
#include "KoratReceivedDamageParameter.h"
#include "KoratSequencePlayInfo.h"
#include "KoratVanishingMove.h"
#include "OnBattleFinishDelegate.h"
#include "OnBattleSettleDelegate.h"
#include "OnBattleSetupDelegate.h"
#include "OnBattleStartDelegate.h"
#include "OnChangeToNewCharacterDelegate.h"
#include "OnTickEndWithPauseDelegate.h"
#include "OnTrainingPositionResetDelegate.h"
#include "SSGameStateBase.h"
#include "SSSupportingCharacterData.h"
#include "SSBattleGameStateBase.generated.h"

class AActor;
class ASSCharacter;
class ASSLevelSequenceActor;
class UCurveFloat;
class UForceFeedbackEffect;
class ULevelSequence;
class ULevelSequencePlayer;
class UObject;
class USSActionCameraDataAsset;
class USSBattleReplaySaveGame;
class USSBlastImpactDataAsset;
class USSCrashImpactDataAsset;
class USSPowerImpactDataAsset;
class USSRandom;
class USSSpeedImpactDataAsset;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSBattleGameStateBase : public ASSGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactBoostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactStandardAccell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactBoostdAccell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactStandardDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactBoostDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactPenaltyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactPenaltyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactPenaltyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPowerImpactDataAsset* PowerImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactUIProgressCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactTiningBoostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactRapidBoostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastImpactDataAsset* BlastImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlastImpactPumpMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlastImpactPowerCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlastImpactBoostScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlastImpactPowerPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSSpeedImpactDataAsset* SpeedImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactDamageCutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactOnFinishCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactTimingTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactRapidTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactRapidTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCrashImpactDataAsset* CrashImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartBattleFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RematchFailureDispTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UForceFeedbackEffect*> PadShakes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleSetup OnBattleSetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleStart OnBattleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleFinish OnBattleFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleStart OnPureBattleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleStart OnPureBattleStartNoClear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleFinish OnBattleFinishNoClear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleSettle OnBattleSettle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrainingPositionReset OnTrainingPositionReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeToNewCharacter OnChangeToNewCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeToNewCharacter OnChangeToNewCharacterPost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTickEndWithPause OnTickEndWithPause;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrashImpactPhaseLoopCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkUnderflowPauseEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInterruptCommonPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkErrorPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMatchedPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkUnderflowPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkFencePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReplayDebugPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingBlockPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockingLoadCharaResourcePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerPauseWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerPause1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerPause2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugPauseWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugPause1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugPause2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMapChangePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInterruptDialogPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnyPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NetworkFenceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* PowerImpactDominanceCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* CrashImpactDominanceCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* CrashImpactNextAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ASSCharacter*> CrashImpactCharaMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* CrashImpactLastWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SpeedImpactWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SpeedImpactDominanceCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* BlastImpactAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* BlastImpactReflecter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* BlastImpactWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlastImpactExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* CharacterChangeBeforCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetCharacterChangeBeforeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* CharacterChangeAfterCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetCharacterChangeAfterCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> RespawnBeforeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> RespawnAfterCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataChangeCharacterActionDataList ChangeCharacterActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSSupportingCharacterData> LoadingSupporters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSSupportingCharacterData> LoadedSupporters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleReplaySaveGame* ReplaySave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* MapChangeStartCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SurvivalCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* DefeatedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraSideBySideMode PreSideBySideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTimeOverSettle;
    
public:
    ASSBattleGameStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WarpTheCharacter(ASSCharacter* InCharacter, const ESSWarpTargetType InWarpTargetType);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitUiLevelLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitMapChangeLoadingComplete(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitingForDramaticFinishDemo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitingForCameraInterpolation(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForReleaseSpeedImpactInputLock(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForFinishTutorialSpeedImpactTimingKeyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterMontageTranslationFall(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const float InLocationZ);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterLockOn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterActionSection(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterActionIdle(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const int32 InEndFrame);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterActionFinishDemo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterActionEndOffsetFrame(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const EKoratAnimType InAnimType, int32 InOffsetFrame);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForCharacterActionDown(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter, const TSet<FKoratActionDataList>& InNames, float InTimeoutSec);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitFinishedPlayVoice(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitFinishedPlayAppealVoice(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, const ASSCharacter* InCharacter, const float InSkipDilation, const bool bInCanSkip);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitCharacterLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitBattleStatus(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitBattleSetupLoad(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSideBySideCamera();
    
    UFUNCTION(BlueprintCallable)
    void TutorialSpeedImpactStart();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void TrySuspendApearScene(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventWarpPreWarpPos(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventWarpOtherSpace(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventWarpOriginPosition(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventWarpEnemySide(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventDemoWarpGround(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventDemoWarpAir(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, EWarpGroupType InWarpGroup, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventDemoWarp(const UObject* WorldContextObject, const ULevelSequencePlayer* InSequencePlayer, const FName InLocationName, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectWeapon(uint8 StartPosition, uint8 EndPosition, uint8 Strength);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectVibration(uint8 Position, uint8 Frequency, uint8 Amplitude);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectMultipleVibration(uint8 Frequency, uint8 AmplitudeOfPosition0, uint8 AmplitudeOfPosition1, uint8 AmplitudeOfPosition2, uint8 AmplitudeOfPosition3, uint8 AmplitudeOfPosition4, uint8 AmplitudeOfPosition5, uint8 AmplitudeOfPosition6, uint8 AmplitudeOfPosition7, uint8 AmplitudeOfPosition8, uint8 AmplitudeOfPosition9);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectMultipleFeedback(uint8 StrengthOfPosition0, uint8 StrengthOfPosition1, uint8 StrengthOfPosition2, uint8 StrengthOfPosition3, uint8 StrengthOfPosition4, uint8 StrengthOfPosition5, uint8 StrengthOfPosition6, uint8 StrengthOfPosition7, uint8 StrengthOfPosition8, uint8 StrengthOfPosition9);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEffectFeedback(uint8 Position, uint8 Strength);
    
    UFUNCTION(BlueprintCallable)
    static void TransitCharacterAction(ASSCharacter* InCharacter, FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void TaketurnsToNewCharacterAppear();
    
    UFUNCTION(BlueprintCallable)
    void TaketurnsToNewCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SwitchValidAuraUpdateVisibilityFlag(AActor* InActor, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SwitchNewChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void StopCharacterAction(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StartTutorialFinishScreenFade();
    
    UFUNCTION(BlueprintCallable)
    void StartTrainingPositionReset(const bool InPositionOnly);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingSectionNoTouchRootMotion();
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingSection();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartFade(const FLinearColor InColor, const float InDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    static void StartCharacterAction(ASSCharacter* InCharacter, const FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void SpeedImpactTimingInputStart(bool TimingisStarted);
    
    UFUNCTION(BlueprintCallable)
    void SpeedImpactStart();
    
    UFUNCTION(BlueprintCallable)
    void SpeedImpactRapidInputStart(bool RapidisStarted);
    
    UFUNCTION(BlueprintCallable)
    void SpeedImpactFinish();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void SpeedImpactBattleConversationFinishWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void SkipApearStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, float InFadeTime, float InWaitTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void SkipApearSequence(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, ASSLevelSequenceActor* InSequenceActor, const float InSkipDilation, const bool bInCanSkip);
    
    UFUNCTION(BlueprintCallable)
    void SkipApearInner();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void SkipApearEnd(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, float InFadeTime, float InWaitTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void SkipApearCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, EKoratLoop& OutResult, const ASSCharacter* InCharacter, FName InSection, const float InSkipDilation, const bool bInCanSkip, float InDebugSkipTimer);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void Skip(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const EKoratDoUntil InRange, const float InSkipDilation, const bool bSkipTest);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void ShowWidget(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftClassPtr<USSUiWidget> InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitForSettleDirection(const bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetSideBySideCameraMode(bool InEnable, bool InBurstUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetSideBySideCameraEnableInner(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepPlayerController(bool InKeep);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTimeOverSettle(bool IsTimeOver);
    
    UFUNCTION(BlueprintCallable)
    void SetHandyShakeManualByPlayer(bool bInShake);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFinishEarlyHD(bool InAfterglowHD);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBlastImpact(const bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCrashImpactNextAttacker();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTimeDebugStop(const bool bInIsStop);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleRemainingTime(const float InSec);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendEndInfoToBattleDirectingActor(EKoratBattleDirectingActivate InActivateType, int32 InOptionValue);
    
public:
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList SelectChaseChangeInAction(const FKoratActionDataList& InTargetAction, TArray<FKoratActionDataList> InChaseChangeInActions);
    
    UFUNCTION(BlueprintCallable)
    void SearchSafeChangeEntranceLocation(ASSCharacter* InBeforeCharacter, ASSCharacter* InNewCharacter, FVector InBeforeLocation, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResultStart();
    
    UFUNCTION(BlueprintCallable)
    bool RestartStart(bool bInBattle);
    
    UFUNCTION(BlueprintCallable)
    void RespawnCharacters2();
    
    UFUNCTION(BlueprintCallable)
    void RespawnCharacters();
    
    UFUNCTION(BlueprintCallable)
    bool ResetStart();
    
    UFUNCTION(BlueprintCallable)
    void ResetRingoutTelop();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharactersAtApear();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraFade();
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionCameraTargets();
    
    UFUNCTION(BlueprintCallable)
    static void RequestTransitCharacterAction(ASSCharacter* InCharacter, FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void RequestSwitchController();
    
    UFUNCTION(BlueprintCallable)
    void RequestOutGameResult();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceBeforeCharacterEffectColorWithNewCharacter(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTutorialSpeedImpactInputLock();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactTimeInitialize();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactStart();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PowerImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactNToGStart();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactNToGJudge(EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactNToGFinish();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactJudge(EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToNStart();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToNJudge(EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToNFinish();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToGStart();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToGJudge(EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactGToGFinish();
    
    UFUNCTION(BlueprintCallable)
    void PowerImpactFinish();
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopLevelSequenceWithParameter(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, const FBattleImpactLevelSequenceParams InParameter);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopLevelSequence(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequenceWithSequencePlayInfo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequenceWithRebindArray(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, const TArray<FKoratRebindDescription>& InRebindDescriptionArray, ASSLevelSequenceActor*& OutSequenceActor, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequenceWithParameter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, const FBattleImpactLevelSequenceParams InParameter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequenceAtMainWithSequencePlayInfo(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation, bool InAfterglowIsComplete);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequenceAtMain(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlayLevelSequence(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer, bool InRegistCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryAppealSceneStart(ASSCharacter* InWinner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedImpactSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerImpactSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerImpactNToGSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerImpactGToNSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerImpactGToGSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapChange(const FKoratMapDataList& InMapDataList, const TSoftObjectPtr<ULevelSequence>& InLevelSequence, const TSoftObjectPtr<ULevelSequence>& InOTLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactAttack(int32 InPlaySide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyBattleCharacterAllDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrashImpactSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterTaketurnsSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterDamageChangeSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterChangeSceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBodyChangeSceneStart(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlastImpactSceneStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginFrameProcess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleSetupStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApearSceneStart();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void MapChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void MapChangeFinish();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void LoopLevelSequence(UObject* WorldContextObject, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void LoadResultMenu(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void KeepResetAnimInstanceDynamics(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, float InTotalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitForTutorialBattleStatus() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsValidSectionName(ASSCharacter* InCharacter, FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnionAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialSpeedImpact() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTrainingPositionResetTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeOverSettle() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetCharacterBlow(ASSCharacter* InCharacter, FKoratActionDataList& OutCurrentAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeedImpactInputLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSideBySideCameraEnableInner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSideBySide1P(int32 InSrcCSlot, int32 InDstCSlot) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSettleStatus();
    
    UFUNCTION(BlueprintCallable)
    bool IsRezultMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsResetStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausedByAnyController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausedAtFrameStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingSection() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsIntroductionOrder2pFirst();
    
    UFUNCTION(BlueprintCallable)
    bool IsImpactGvsG();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsDramaticFinish(const ASSCharacter* InDirectingWinner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterDamageCostumeChanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleTimeStop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void IsBattleImpactBreak(ESSFlowConditionsJudgmentType& OutResult, const EBattleImpactType InImpactType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChangeAfterCharacterSearchType();
    
    UFUNCTION(BlueprintCallable)
    void InitialBattleCharacterStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ImpactBattleCanInterimResult();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void HideWidget(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TSoftClassPtr<USSUiWidget> InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpeedImpactUIFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedImpactTimingTotalTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedImpactRapidTotalTime();
    
    UFUNCTION(BlueprintCallable)
    ECameraSideBySideMode GetSideBySideCameraMode();
    
    UFUNCTION(BlueprintCallable)
    USSBattleReplaySaveGame* GetReplaySave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaitTime3();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaitTime2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaitTime1();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetPlayerCharacter(const int32 InPlaySide) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMyPlayerSide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetMapChangeStartCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void GetDeadlyChangeEntranceLocation(ASSCharacter* InCharacter, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrashImpactUiIsIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrashImpactRandWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, ASSCharacter*> GetCrashImpactPrePhaseWinner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetCrashImpactNextAttacker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrashImpactInputTime();
    
    UFUNCTION(BlueprintCallable)
    bool GetChaseChangeEntranceMoveParameter(ASSCharacter* InCharacter, const FKoratActionDataList& InAction, FKoratVanishingMove& OutMoveParameter, FVector& OutAnimMontageOffset, bool& OutIsDrawVanishingEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterVoiceStatus GetCharacterVoiceStatus(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCharacterCostumeModelID(const FKoratCharacterDataList& InCharacterDataList, const FKoratCharacterCostumeDataList& InCharacterCostume, int32 InDamageLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetCharacterByPlayerStartData(const FKoratPlayerStartDataList InPlayerStartData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterDataChangeCharacterActionDataList GetChangeCharacterActionDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlastImpactResultFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetBeforeTaketurnsCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetBeforeChangeTargetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetBeforeChangeCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleTimeDebugStop() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBattleRemainingTime();
    
    UFUNCTION(BlueprintCallable)
    float GetBattleElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetBattleDirectingWinner();
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetBattleDirectingPlayer(int32 InPlaySide);
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetBattleDirectingLooser();
    
    UFUNCTION(BlueprintCallable)
    float GetBattleDirectingElapsedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetAfterChangeTargetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetAfterChangeCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void GameStateDebugPrint(const FString& InString);
    
    UFUNCTION(BlueprintCallable)
    void ForceDisableHandyShakeManual(bool InDisable);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void FadeMeshTimeScale(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, float InTimeScale, float InFadeTime, float InStartTimeScale);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void ExecuteResultLine(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void EndMapChange();
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingSectionNoTouchRootMotion();
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingSection();
    
    UFUNCTION(BlueprintCallable)
    void EndBodyChange(ASSCharacter* InWinner);
    
    UFUNCTION(BlueprintCallable)
    static void EnableCharacterCollision(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void DisplayKeepFade(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void DisplayFadeIn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void DisplayCutIn(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void DisableCharacterCollision(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void DestroyBattleCharacterAllDelayStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void DestroyActionSequenceActorAllStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* CreateLevelSequenceActor(AActor* InOwnerActor, const TSoftObjectPtr<ULevelSequence> InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySeq, bool InEnableRebindPlayer, bool InEnablePlayerTransformTrack, bool InNoUseOwnerCutDirector, bool InRegistCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* CreateHiddenCharacterForTaketurns(FVector InNewLocation);
    
    UFUNCTION(BlueprintCallable)
    void CreateHiddenCharacter(bool InReuseCameraFast, bool InDamageCostume);
    
    UFUNCTION(BlueprintCallable)
    void CreateDamageCostumeCharacter(bool InReuseCameraFast);
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactStart();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void CrashImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactPhaseStart(TMap<FString, ASSCharacter*> InMap, const ASSCharacter* InAttacker, EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactPhaseJudge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CrashImpactPhaseCounterReset();
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactPhaseCounterAddition(EKoratLoop& OutResult, int32 InMaxPhaseCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void CrashImpactInputStart();
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactInputFinish();
    
    UFUNCTION(BlueprintCallable)
    void CrashImpactFinish();
    
    UFUNCTION(BlueprintCallable)
    void ClearFade();
    
    UFUNCTION(BlueprintCallable)
    void ClearBuff();
    
    UFUNCTION(BlueprintCallable)
    void CheckSideBySideCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void CheckDramaticFinish(bool& OutDramaticFinish);
    
    UFUNCTION(BlueprintCallable)
    void CheckDamageCostumeLoadedInThisTerminal(EKoratLoop& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void CharacterTaketurnsStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CharacterTaketurnsFinish();
    
    UFUNCTION(BlueprintCallable)
    void CharacterTaketurnsControllerChange();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void CharacterDamageCostumeChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CharacterDamageCostumeChangeFinish();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void CharacterChangeStart(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CharacterChangeFinish();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToNewCharacterForDamageCostume();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeToNewCharacterCommon(bool InTakeOverSparking, bool bInSamePerson);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeToNewCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterActionSectionOT(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterActionSection(ASSCharacter* InCharacter, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void BodyChangeStart(const FKoratActionDataList& InAction, const FKoratReceivedDamageParameter& InReceivedDamageParameter);
    
    UFUNCTION(BlueprintCallable)
    void BodyChangeFinish();
    
    UFUNCTION(BlueprintCallable)
    void BlastImpactStateStart();
    
    UFUNCTION(BlueprintCallable)
    void BlastImpactStateJudge();
    
    UFUNCTION(BlueprintCallable)
    void BlastImpactStart();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void BlastImpactScene(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void BlastImpactReadyWait(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void BlastImpactFinish();
    
    UFUNCTION(BlueprintCallable)
    void BattleStart();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactSpeedBreak(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactPowerBreak(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactCrashBreak(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactBreak(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactBlastBreak(UObject* WorldContextObject);
    
};

