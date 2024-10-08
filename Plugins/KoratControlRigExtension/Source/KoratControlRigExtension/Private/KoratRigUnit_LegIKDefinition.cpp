#include "KoratRigUnit_LegIKDefinition.h"

FKoratRigUnit_LegIKDefinition::FKoratRigUnit_LegIKDefinition() {
    this->NumBonesInLimb = 0;
    this->MinRotationAngle = 0.00f;
    this->FootBoneForwardAxis = EAxis::None;
    this->HingeRotationAxis = EAxis::None;
    this->bEnableRotationLimit = false;
    this->bEnableKneeTwistCorrection = false;
}

