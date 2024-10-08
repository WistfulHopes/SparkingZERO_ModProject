#include "SSMovementDataAsset.h"

USSMovementDataAsset::USSMovementDataAsset() {
    this->NormalSpeed = 1500.00f;
    this->NearSpeed = 750.00f;
    this->NearDistance = 500.00f;
    this->SpeedInterpolateRange = 50.00f;
    this->NormalWalkSpeed = 1500.00f;
    this->NearWalkSpeed = 750.00f;
    this->StartMovementMode = MOVE_Walking;
    this->JumpMaxHoldTime = 0.60f;
    this->JumpMaxCount = 100;
    this->DashJumpTransitionableHeight = 100.00f;
    this->DashJumpXYVelocity = 3000.00f;
    this->DashJumpZVelocity = 3000.00f;
    this->AutoLandingHeight = 5.00f;
    this->AutoLandingNoMotionHeight = 100.00f;
    this->NoActionPitchHeight = 100.00f;
    this->AutoLandingFallScale = 0.10f;
    this->GravityScale = 4.00f;
    this->WalkableFloorAngle = 44.77f;
    this->MaxAcceleration = 65535.00f;
    this->JumpZVelocity = 2500.00f;
    this->AirControl = 0.00f;
    this->AirControlBoostMultiplier = 10000.00f;
    this->AirControlBoostVelocityThreshold = 200.00f;
    this->GroundFriction = 8.00f;
    this->BrakingDecelerationWalking = 2048.00f;
    this->BrakingDecelerationFlying = 6000.00f;
    this->LockOnTurnSpeed = 1440.00f;
    this->bIsTransitionRelaxIdle = false;
    this->MoveEffectStartSpeed = 800.00f;
    this->MoveEffectEndSpeed = 0.00f;
    this->bIsAutoJumpToFly = true;
    this->JumpToFlySeconds = 0.50f;
    this->StepNearInputAngleFront = 90.00f;
    this->StepNearInputAngleLeftRight = 90.00f;
    this->bIsStepNear4Direction = false;
    this->StepFarInputAngleFront = 270.00f;
    this->bIsStepFar2Direction = false;
    this->ActionTurnSpeed = 1440.00f;
    this->ActionTiltSpeed = 1440.00f;
    this->FluffyCurve = NULL;
    this->VanishingTraceShiftDistance = 150.00f;
    this->EmbedInWallAngle = 12.50f;
    this->EmbedInWallMinElapsedTime = 0.10f;
    this->EmbedInWallMaxElapsedTime = 0.50f;
    this->EmbedInGroundAngle = 45.00f;
    this->EmbedInGroundMinElapsedTime = 0.10f;
    this->EmbedInGroundMaxElapsedTime = 0.50f;
    this->BlownHitWallParamData = NULL;
}


