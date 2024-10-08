#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EBattleImpactTriggerType.h"
#include "EKoratBattleHitStopRequestPlayer.h"
#include "EKoratBattleKey.h"
#include "SSBattleController.generated.h"

class ASSBattlePlayerState;
class ASSCharacter;

UINTERFACE(Blueprintable)
class USSBattleController : public UInterface {
    GENERATED_BODY()
};

class ISSBattleController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedVanishingAssault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedUltimateBlast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedThrowDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSwoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSuperZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSpeedImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSpecial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedSoar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedRush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedPowerImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveFront() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedMoveBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedKidan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedImpactBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedEmote3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedEmote2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedEmote1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedEmote0() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedEmote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDragonHomingStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDragonHomingEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDragonDashStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDragonDashEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDownRevival() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedDirecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedCrashImpactDefence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedCrashImpactAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastSkill2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastSkill1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastForte2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastForte1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBlastBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustReleasedBattleKey(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedVanishingAssault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedUltimateBlast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedThrowDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSwoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSuperZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSpeedImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSpecial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedSoar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedRush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedPowerImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveFront() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedMoveBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedKidan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedImpactBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedEmote3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedEmote2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedEmote1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedEmote0() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedEmote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDragonHomingStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDragonHomingEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDragonDashStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDragonDashEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDownRevival() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedDirecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedCrashImpactDefence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedCrashImpactAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastSkill2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastSkill1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastForte2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastForte1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBlastBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WasInputKeyJustPressedBattleKey(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VanishingStarted(float InBlankTime, float InPreEffectTime, float InPostEffectTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchBattleController(const ASSBattlePlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPlayerInfoWidget(const int32 InPlayerSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEventSkipWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpeedImpactStarted(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugReplaySparkingFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugReplayRecordFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugReplayLoopFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugReplayFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestImpactAttack(ASSCharacter* InCharacter, EBattleImpactTriggerType InImpactType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestImpact(ASSCharacter* InCharacter, EBattleImpactTriggerType InImpactType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PowerImpactStarted(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyChangePlaySide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownVanishingAssault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownUltimateBlast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownThrowDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSwoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSuperZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSubUIView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSpeedImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSpecial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownSoar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownRush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownPowerImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveFront() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownMoveBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownLightningAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownKidan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownImpactBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownEmote3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownEmote2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownEmote1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownEmote0() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownEmote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDragonHomingStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDragonHomingEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDragonDashStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDragonDashEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDownRevival() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownDirecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownCrashImpactDefence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownCrashImpactAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastSkill2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastSkill1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastForte2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastForte1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBlastBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputKeyDownBattleKey(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugReplaySparkingFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugReplayRecordFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugReplayLoopFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugReplayFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ImpactAttack(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitStopRequest(EKoratBattleHitStopRequestPlayer InPlayerType, float InHitStopTime, float InHitStopDilation, float InHitStopDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputUltimateBlastDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputSuperZCounterDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputRushCameraDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputRevengeDashDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputRevengeCounterDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputPlayActionDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputNormalInputTimingDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputLocomotionTiltDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputLocomotionBlowDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputEasyInputTimingDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInputBlastImpactDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVanishingPreEffectRemainingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVanishingBlankRemainingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D GetMovementInputKeyVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHitStopRequest(float& OutHitStopTime, float& OutHitStopDilation, float& OutHitStopDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D GetCameraRotateInputKeyVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceFinishVanishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayerInfoWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndEventSkipWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DemonstrationHaltStarted(ASSCharacter* InCharacter, float InBlankTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DemonstrationHaltFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DebugReplaySave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DebugReplayLoadWithText(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DebugReplayLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CrashImpactStarted(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckHitStopRquest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlastImpactReflecterStarted(ASSCharacter* InCharacter, float OffsetValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlastImpactAttackerStarted(ASSCharacter* InCharacter, float OffsetValue);
    
};

