#include "SSAnimInstanceSubIdleMove.h"

USSAnimInstanceSubIdleMove::USSAnimInstanceSubIdleMove() {
    this->WalkMotionTime = 0.50f;
    this->WalkMotionDistance = 1.00f;
    this->WalkDistanceScale = 1.00f;
    this->WalkMotionScale = 1.00f;
    this->RunMotionTime = 0.50f;
    this->RunMotionDistance = 10.00f;
    this->RunDistanceScale = 1.00f;
    this->RunMotionScale = 1.00f;
    this->Speed_ = 0.00f;
    this->XYSpeed_ = 0.00f;
    this->ZSpeed_ = 0.00f;
    this->TargetDistance_ = 0.00f;
    this->DirectionY_ = 0.00f;
    this->DirectionZ_ = 0.00f;
    this->NearMoveAlpha_ = 0.00f;
    this->BattleMoveAlpha_ = 0.00f;
    this->IsLockOn_ = false;
    this->IsInAir_ = false;
    this->LocomotionStatus_ = EKoratLocomotionState::IdleMove;
    this->DragonDashStatus_ = EKoratDragonDashState::OFF;
    this->IsRequestPlayIdle_ = false;
    this->IsTransitionRelaxIdle_ = false;
    this->ActionIdleType_ = EKoratActionIdleType::Normal;
    this->BlowStatus_ = EKoratBlowState::OFF;
    this->BlowType_ = EKoratBlowType::Normal;
    this->BlowIsFront_ = false;
    this->BlowHitSpeedNormal_ = 0.00f;
    this->BlowHitSpeedParallel_ = 0.00f;
    this->BlowBoundSSpeedMax_ = 2000.00f;
    this->BlowBoundMSpeedMax_ = 3000.00f;
    this->BlowReactionLevel_ = 0;
    this->DragonHomingStatus_ = EKoratDragonHomingState::OFF;
    this->RevengeDashStatus_ = EKoratDragonHomingState::OFF;
    this->IsRequestResetStateMachine_ = false;
    this->ResetStateMachineStatus_ = EKoratLocomotionState::IdleMove;
    this->BlastDashStatus_ = EKoratDragonHomingState::OFF;
    this->IsNearMode_ = false;
    this->VelocityZ_ = 0.00f;
    this->StickXSpeed_ = 0.00f;
    this->StickYSpeed_ = 0.00f;
    this->InputZ_ = 0.00f;
    this->CurrentMaxSpeed_ = 1.00f;
    this->ShortDashStatus_ = EKoratShortDashState::OFF;
    this->ShortDashAdditionalMaxSpeed_ = 0.00f;
    this->ShortDashAdditionalSpeed_ = 0.00f;
    this->ShortDashAdditionalSpeedCurve_ = NULL;
    this->ShortDashMoveTimer_ = 0.00f;
    this->DragonHomingStatusOld_ = EKoratDragonHomingState::OFF;
    this->BlowStatusOld_ = EKoratBlowState::OFF;
    this->BlastDashStatusOld_ = EKoratDragonHomingState::OFF;
    this->IsEnableMoveEffect_ = false;
    this->MoveEffectStartSpeed_ = -1.00f;
    this->MoveEffectEndSpeed_ = -1.00f;
    this->BodyPitchAngle_ = 0.00f;
    this->BodyPitchEnabled_ = false;
    this->IsDownBlendSkip_ = false;
}

bool USSAnimInstanceSubIdleMove::IsGroundWalkingOnCharacter() const {
    return false;
}

bool USSAnimInstanceSubIdleMove::IsGroundRunningOnCharacter() const {
    return false;
}

bool USSAnimInstanceSubIdleMove::IsGroundMoveOnCharacter() const {
    return false;
}

float USSAnimInstanceSubIdleMove::CalculationWalkMotionScale() const {
    return 0.0f;
}

float USSAnimInstanceSubIdleMove::CalculationRunMotionScale() const {
    return 0.0f;
}


