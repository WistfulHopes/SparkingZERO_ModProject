#include "KoratCharacterDataMovementParameter.h"

FKoratCharacterDataMovementParameter::FKoratCharacterDataMovementParameter() {
    this->NormalSpeed = 0.00f;
    this->NearSpeed = 0.00f;
    this->NearDistance = 0.00f;
    this->SpeedInterpolateRange = 0.00f;
    this->NormalWalkSpeed = 0.00f;
    this->NearWalkSpeed = 0.00f;
    this->StartMovementMode = MOVE_None;
    this->JumpMaxHoldTime = 0.00f;
    this->JumpMaxCount = 0;
    this->DashJumpTransitionableHeight = 0.00f;
    this->DashJumpXYVelocity = 0.00f;
    this->DashJumpZVelocity = 0.00f;
    this->AutoLandingHeight = 0.00f;
    this->AutoLandingNoMotionHeight = 0.00f;
    this->NoActionPitchHeight = 0.00f;
    this->AutoLandingFallScale = 0.00f;
    this->GravityScale = 0.00f;
    this->WalkableFloorAngle = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->JumpZVelocity = 0.00f;
    this->AirControl = 0.00f;
    this->AirControlBoostMultiplier = 0.00f;
    this->AirControlBoostVelocityThreshold = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDecelerationWalking = 0.00f;
    this->BrakingDecelerationFlying = 0.00f;
    this->LockOnTurnSpeed = 0.00f;
    this->bIsTransitionRelaxIdle = false;
    this->MoveEffectStartSpeed = 0.00f;
    this->MoveEffectEndSpeed = 0.00f;
    this->bIsAutoJumpToFly = false;
    this->JumpToFlySeconds = 0.00f;
    this->StepNearInputAngleFront = 0.00f;
    this->StepNearInputAngleLeftRight = 0.00f;
    this->bIsStepNear4Direction = false;
    this->StepFarInputAngleFront = 0.00f;
    this->bIsStepFar2Direction = false;
    this->ActionTurnSpeed = 0.00f;
    this->ActionTiltSpeed = 0.00f;
    this->FluffyCurve = NULL;
    this->VanishingTraceShiftDistance = 0.00f;
    this->EmbedInWallAngle = 0.00f;
    this->EmbedInWallMinElapsedTime = 0.00f;
    this->EmbedInWallMaxElapsedTime = 0.00f;
    this->EmbedInGroundAngle = 0.00f;
    this->EmbedInGroundMinElapsedTime = 0.00f;
    this->EmbedInGroundMaxElapsedTime = 0.00f;
    this->ClimbDistance = 0.00f;
    this->WallAngle = 0.00f;
    this->SlideAngleWall = 0.00f;
    this->SlideAngleAirWall = 0.00f;
    this->SlideAngleGround = 0.00f;
    this->SlideAngleAirGround = 0.00f;
}

