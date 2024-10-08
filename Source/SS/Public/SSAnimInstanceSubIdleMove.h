#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EKoratActionIdleType.h"
#include "EKoratBlowState.h"
#include "EKoratBlowType.h"
#include "EKoratDragonDashState.h"
#include "EKoratDragonHomingState.h"
#include "EKoratLocomotionState.h"
#include "EKoratShortDashState.h"
#include "KoratHitBackMovementData.h"
#include "SSAnimInstance.h"
#include "SSAnimInstanceSubIdleMove.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class USSAnimInstanceSubIdleMove : public USSAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkMotionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkMotionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunMotionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunMotionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunMotionScale;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double Speed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double XYSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double ZSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastVelocityRot_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CharacterRot_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double TargetDistance_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double DirectionY_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double DirectionZ_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double NearMoveAlpha_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BattleMoveAlpha_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLockOn_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInAir_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult EventHitArgHit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratLocomotionState LocomotionStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonDashState DragonDashStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator DragonDashRotation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRequestPlayIdle_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsTransitionRelaxIdle_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratActionIdleType ActionIdleType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratBlowState BlowStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratBlowType BlowType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BlowIsFront_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BlowHitSpeedNormal_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BlowHitSpeedParallel_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BlowBoundSSpeedMax_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BlowBoundMSpeedMax_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlowReactionLevel_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState DragonHomingStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState RevengeDashStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRequestResetStateMachine_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratLocomotionState ResetStateMachineStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState BlastDashStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetDeltaRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsNearMode_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double VelocityZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D InputXY_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double StickXSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double StickYSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double InputZ_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double CurrentMaxSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratShortDashState ShortDashStatus_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double ShortDashAdditionalMaxSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double ShortDashAdditionalSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShortDashAdditionalSpeedCurve_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double ShortDashMoveTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState DragonHomingStatusOld_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratBlowState BlowStatusOld_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratHitBackMovementData BlowHitBackMovementData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratDragonHomingState BlastDashStatusOld_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEnableMoveEffect_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double MoveEffectStartSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double MoveEffectEndSpeed_;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double BodyPitchAngle_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BodyPitchEnabled_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDownBlendSkip_;
    
public:
    USSAnimInstanceSubIdleMove();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundWalkingOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundRunningOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundMoveOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculationWalkMotionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculationRunMotionScale() const;
    
};

