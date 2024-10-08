#include "SSAnimNotifyStateGrapple.h"

USSAnimNotifyStateGrapple::USSAnimNotifyStateGrapple() {
    this->Duration = 0.00f;
    this->GrappleComponent = NULL;
}

void USSAnimNotifyStateGrapple::EndGrapple() const {
}

void USSAnimNotifyStateGrapple::BeginGrapple(const EKoratInverseKinematicsType Type, const FGrappleHandParameters& RightHand, const FGrappleHandParameters& LeftHand, const FName& GrabBone) const {
}


