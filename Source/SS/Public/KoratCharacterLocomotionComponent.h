#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EKoratActionIdleType.h"
#include "EKoratBattleKey.h"
#include "EKoratBlowState.h"
#include "EKoratBlowType.h"
#include "EKoratBranch.h"
#include "EKoratCharacterLocomotionDetailStatus.h"
#include "EKoratCharacterLocomotionGroundRunningState.h"
#include "EKoratDashUkemiState.h"
#include "EKoratDashUkemiType.h"
#include "EKoratDashUpDownState.h"
#include "EKoratDashUpDownType.h"
#include "EKoratDragonDashState.h"
#include "EKoratDragonHomingState.h"
#include "EKoratHighSpeedMoveState.h"
#include "EKoratJumpState.h"
#include "EKoratLocomotionState.h"
#include "EKoratShortDashState.h"
#include "EKoratStepState.h"
#include "EKoratStepType.h"
#include "EKoratStunReactionState.h"
#include "EKoratWallUkemiState.h"
#include "EKoratZBurstDashState.h"
#include "KoratActionDataList.h"
#include "KoratHitBackMovementData.h"
#include "KoratMapAttributeDataList.h"
#include "LocomotionParameterCache.h"
#include "KoratCharacterLocomotionComponent.generated.h"

class AActor;
class UCurveFloat;
class USSCharacterNumeric;
class USSSplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterLocomotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundRunningInStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundRunningInMotionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroundRunningInMotionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundRunningOutStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundRunningOutMotionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroundRunningOutMotionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterLocomotionGroundRunningState GroundRunningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownToRevivalTimeInfinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> KoratBattleKeyDownList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLockOnCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNearModeCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxSpeedCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList CurrentRunningAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentRunningSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratCharacterLocomotionDetailStatus CurrentLocomotionDetailStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XYSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastVelocityRotCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CharacterRotCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ToTargetRotationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistanceCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionYCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionZCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearMoveAlphaCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleMoveAlphaCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNearModeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLockOnCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInAirCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VelocityCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityZCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearModeSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InputVectorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputZCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult EventHitArgHitCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableMoveEffectCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveEffectStartSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveEffectEndSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratLocomotionState LocomotionStateCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratShortDashState ShortDashStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortDashAdditionalMaxSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortDashAdditionalSpeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShortDashAdditionalSpeedCurveCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortDashMoveTimerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDragonDashState DragonDashStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DragonDashRotationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBlowState BlowStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBlowType BlowTypeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlowIsFrontCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitBackMovementData BlowHitBackMovementDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowHitSpeedNormalCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowHitSpeedParallelCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowBoundSSpeedMaxCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowBoundMSpeedMaxCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlowReactionLevelCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState DragonHomingStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState RevengeDashStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestPlayIdleCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTransitionRelaxIdleCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionIdleType ActionIdleTypeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestResetStateMachineCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratLocomotionState ResetStateMachineStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState BlastDashStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratHighSpeedMoveState HighSpeedMoveStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratZBurstDashState ZBurstDashStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSplineComponent* SplineComponentCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineNowDistanceCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDashUkemiState DashUkemiStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDashUkemiType DashUkemiTypeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForecastBlowHitCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForecastBlowHitLocationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForecastBlowHitTimeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapAttributeDataList ForecastBlowHitMapAttributeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForecastBlowHitNormalCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDashUpDownState DashUpDownStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDashUpDownType DashUpDownTypeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratJumpState JumpStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratStepState StepStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratStepType StepTypeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratStunReactionState StunReactionStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StunReactionIsFrontCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratWallUkemiState WallUkemiStatusCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObstacleDetectionCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDownBlendSkipCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NearRangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NearRangeSpeedGround;
    
public:
    UKoratCharacterLocomotionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpeedCpp(float InDistance, bool bInIsFixRangeSpeed, bool bInIsNear);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRangeCpp(float InDistance, bool bInIsForceChange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLocomotionParameterCache();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLocomotionDetailStatus(EKoratCharacterLocomotionDetailStatus& OutLocomotionDetailStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInputMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentRunningAction(FKoratActionDataList& OutRunningAction, FName& OutRunningSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubIdleMoveSkipStateTimerCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetShortDashCoolTime(float InCoolTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionParameterCache(FLocomotionParameterCache InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLockOnCharacter(bool bLockon);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentRunningAction(const FKoratActionDataList& In);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLocomotionDetailStatus(const EKoratCharacterLocomotionDetailStatus& In);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlowIsFrontState(bool InBlowIsFront);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRotationInMovementComp(const FRotator& InRot);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocationInMovementComp(const FVector& InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetLocomotionInputVector();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReconfirmLockOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDown(const bool InFront, const float InDownToRevivalTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedCharacterNumeric(const USSCharacterNumeric* InParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddWarpOffset(const FVector& InWarpOffsetPos, const FRotator& InWarpOffsetRot, const FVector& InWarpOffsetRotCenterPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionReset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotificationDragonDashStopOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void NotificationDragonDashStartOnBattleAssist();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUpdateSpeedGraph() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsThereAirWallInverticalMoveDirection(float InMoveZ);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsStatusEnableAction() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearRangeGiantCharaCpp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearRangeDistanceCpp(float InDistance) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaningWall(float InWallAngle) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStopRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStartRequestOnBattleAssist(EKoratBranch& OutResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCantFlyKidanOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirWall(AActor* InWallActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetZBurstDashArrivalSecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShortDashCoolTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetRunningAction(FKoratActionDataList& OutRunningAction, FName& OutRunningSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetLocomotionDetailStatus(EKoratCharacterLocomotionDetailStatus& OutLocomotionDetailStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGroundRunningScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCuurentRunningAction(FKoratActionDataList& OutRunningAction, FName& OutRunningSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentLocomotionDetailStatus(EKoratCharacterLocomotionDetailStatus& OutLocomotionDetailStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetBlowIsFrontState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorRotationInMovementComp(FRotator& OutRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorLocationInMovementComp(FVector& OutPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator DragonDashRotatorLerp(const FRotator& InMin, const FRotator& InMax, float InRangeBase, float InRangeSize, float InAlpha) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D CalculationInputVectorNormal(const FVector2D& InInputVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcNearRangeSpeedRate(float InNowDistance, float InNearDistance, bool bCanFly) const;
    
};

