#include "KoratCharacterLocomotionComponent.h"

UKoratCharacterLocomotionComponent::UKoratCharacterLocomotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundRunningInStateTimer = 0.00f;
    this->GroundRunningInMotionTime = 0.25f;
    this->GroundRunningInMotionSpeed = NULL;
    this->GroundRunningOutStateTimer = 0.00f;
    this->GroundRunningOutMotionTime = 0.67f;
    this->GroundRunningOutMotionSpeed = NULL;
    this->GroundRunningState = EKoratCharacterLocomotionGroundRunningState::None;
    this->bDownToRevivalTimeInfinity = false;
    this->bIsLockOnCpp = false;
    this->bIsNearModeCpp = false;
    this->MaxSpeedCpp = 0.00f;
    this->CurrentLocomotionDetailStatus = EKoratCharacterLocomotionDetailStatus::IdleMove;
    this->SpeedCache = 0.00f;
    this->XYSpeedCache = 0.00f;
    this->ZSpeedCache = 0.00f;
    this->TargetDistanceCache = 0.00f;
    this->DirectionYCache = 0.00f;
    this->DirectionZCache = 0.00f;
    this->NearMoveAlphaCache = 0.00f;
    this->BattleMoveAlphaCache = 0.00f;
    this->IsNearModeCache = false;
    this->IsLockOnCache = false;
    this->IsInAirCache = false;
    this->VelocityZCache = 0.00f;
    this->MaxSpeedCache = 1.00f;
    this->NearModeSpeedCache = 0.00f;
    this->InputZCache = 0.00f;
    this->IsEnableMoveEffectCache = false;
    this->MoveEffectStartSpeedCache = 0.00f;
    this->MoveEffectEndSpeedCache = 0.00f;
    this->LocomotionStateCache = EKoratLocomotionState::IdleMove;
    this->ShortDashStatusCache = EKoratShortDashState::OFF;
    this->ShortDashAdditionalMaxSpeedCache = 0.00f;
    this->ShortDashAdditionalSpeedCache = 0.00f;
    this->ShortDashAdditionalSpeedCurveCache = NULL;
    this->ShortDashMoveTimerCache = 0.00f;
    this->DragonDashStatusCache = EKoratDragonDashState::OFF;
    this->BlowStatusCache = EKoratBlowState::OFF;
    this->BlowTypeCache = EKoratBlowType::Normal;
    this->BlowIsFrontCache = false;
    this->BlowHitSpeedNormalCache = 0.00f;
    this->BlowHitSpeedParallelCache = 0.00f;
    this->BlowBoundSSpeedMaxCache = 0.00f;
    this->BlowBoundMSpeedMaxCache = 0.00f;
    this->BlowReactionLevelCache = 0;
    this->DragonHomingStatusCache = EKoratDragonHomingState::OFF;
    this->RevengeDashStatusCache = EKoratDragonHomingState::OFF;
    this->IsRequestPlayIdleCache = false;
    this->IsTransitionRelaxIdleCache = false;
    this->ActionIdleTypeCache = EKoratActionIdleType::Normal;
    this->IsRequestResetStateMachineCache = false;
    this->ResetStateMachineStatusCache = EKoratLocomotionState::IdleMove;
    this->BlastDashStatusCache = EKoratDragonHomingState::OFF;
    this->HighSpeedMoveStatusCache = EKoratHighSpeedMoveState::OFF;
    this->ZBurstDashStatusCache = EKoratZBurstDashState::OFF;
    this->SplineComponentCache = NULL;
    this->SplineNowDistanceCache = 0.00f;
    this->DashUkemiStatusCache = EKoratDashUkemiState::OFF;
    this->DashUkemiTypeCache = EKoratDashUkemiType::Wall;
    this->IsForecastBlowHitCache = false;
    this->ForecastBlowHitTimeCache = 0.00f;
    this->DashUpDownStatusCache = EKoratDashUpDownState::OFF;
    this->DashUpDownTypeCache = EKoratDashUpDownType::Up;
    this->JumpStatusCache = EKoratJumpState::OFF;
    this->StepStatusCache = EKoratStepState::OFF;
    this->StepTypeCache = EKoratStepType::Front;
    this->StunReactionStatusCache = EKoratStunReactionState::OFF;
    this->StunReactionIsFrontCache = false;
    this->WallUkemiStatusCache = EKoratWallUkemiState::OFF;
    this->IsObstacleDetectionCache = false;
    this->IsDownBlendSkipCache = false;
    this->NearRangeSpeed = NULL;
    this->NearRangeSpeedGround = NULL;
}

void UKoratCharacterLocomotionComponent::UpdateSpeedCpp(float InDistance, bool bInIsFixRangeSpeed, bool bInIsNear) {
}

void UKoratCharacterLocomotionComponent::UpdateRangeCpp(float InDistance, bool bInIsForceChange) {
}






void UKoratCharacterLocomotionComponent::SetShortDashCoolTime(float InCoolTime) {
}

void UKoratCharacterLocomotionComponent::SetLocomotionParameterCache(FLocomotionParameterCache InParam) {
}


void UKoratCharacterLocomotionComponent::SetCurrentRunningAction(const FKoratActionDataList& In) {
}

void UKoratCharacterLocomotionComponent::SetCurrentLocomotionDetailStatus(const EKoratCharacterLocomotionDetailStatus& In) {
}


void UKoratCharacterLocomotionComponent::SetActorRotationInMovementComp(const FRotator& InRot) {
}

void UKoratCharacterLocomotionComponent::SetActorLocationInMovementComp(const FVector& InPos) {
}







void UKoratCharacterLocomotionComponent::NotificationDragonDashStopOnBattleAssist() {
}

void UKoratCharacterLocomotionComponent::NotificationDragonDashStartOnBattleAssist() {
}


bool UKoratCharacterLocomotionComponent::IsThereAirWallInverticalMoveDirection(float InMoveZ) {
    return false;
}


bool UKoratCharacterLocomotionComponent::IsNearRangeGiantCharaCpp() const {
    return false;
}

bool UKoratCharacterLocomotionComponent::IsNearRangeDistanceCpp(float InDistance) const {
    return false;
}

bool UKoratCharacterLocomotionComponent::IsLeaningWall(float InWallAngle) const {
    return false;
}

void UKoratCharacterLocomotionComponent::IsDragonDashStopRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterLocomotionComponent::IsDragonDashStartRequestOnBattleAssist(EKoratBranch& OutResult) {
}


bool UKoratCharacterLocomotionComponent::IsAirWall(AActor* InWallActor) const {
    return false;
}


float UKoratCharacterLocomotionComponent::GetShortDashCoolTime() const {
    return 0.0f;
}



float UKoratCharacterLocomotionComponent::GetGroundRunningScale() const {
    return 0.0f;
}

void UKoratCharacterLocomotionComponent::GetCuurentRunningAction(FKoratActionDataList& OutRunningAction, FName& OutRunningSection) const {
}

void UKoratCharacterLocomotionComponent::GetCurrentLocomotionDetailStatus(EKoratCharacterLocomotionDetailStatus& OutLocomotionDetailStatus) const {
}


bool UKoratCharacterLocomotionComponent::GetActorRotationInMovementComp(FRotator& OutRot) {
    return false;
}

bool UKoratCharacterLocomotionComponent::GetActorLocationInMovementComp(FVector& OutPos) {
    return false;
}

FRotator UKoratCharacterLocomotionComponent::DragonDashRotatorLerp(const FRotator& InMin, const FRotator& InMax, float InRangeBase, float InRangeSize, float InAlpha) const {
    return FRotator{};
}

FVector2D UKoratCharacterLocomotionComponent::CalculationInputVectorNormal(const FVector2D& InInputVector) const {
    return FVector2D{};
}

float UKoratCharacterLocomotionComponent::CalcNearRangeSpeedRate(float InNowDistance, float InNearDistance, bool bCanFly) const {
    return 0.0f;
}


