#include "SSUltraVanishingSplineTrail.h"

ASSUltraVanishingSplineTrail::ASSUltraVanishingSplineTrail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TangentDistanceCube = NULL;
    this->ScaleStart = 1.00f;
    this->ScaleEnd = 1.00f;
    this->MyselfCharacter = NULL;
    this->TangentConeDegreeBase = 30.00f;
    this->TangentConeDegreeRange = 30.00f;
    this->TangentDegreeBase = 0.00f;
    this->TangentDegreeRange = 360.00f;
    this->TangentDistortionDegreeRange = 10.00f;
    this->CollisionRadius = 50.00f;
    this->CollisionSearchCount = 5;
    this->bDebugCollision = false;
    this->bDebugNoCollision = false;
    this->bDebugUpdateEveryTime = false;
    this->bDebugRandamToBase = false;
    this->SelectEffectColorComponent = NULL;
    this->bFoundHighSpeedMoveTransform = false;
}


