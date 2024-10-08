#include "SSLookAtTargetActor.h"

ASSLookAtTargetActor::ASSLookAtTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->lifeTime = 0.00f;
    this->LookAtTargetType = ELookAtTargetType::LookAtTargetTypeNormal;
}


