#include "KoratEffectFigureTransformJoint.h"

AKoratEffectFigureTransformJoint::AKoratEffectFigureTransformJoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bManualInputParameter = false;
    this->bUseThisTransform = false;
}

void AKoratEffectFigureTransformJoint::UpdateJointType_Implementation() {
}

void AKoratEffectFigureTransformJoint::SetExecuteActor(AActor* InActor) {
}

void AKoratEffectFigureTransformJoint::OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence) {
}


