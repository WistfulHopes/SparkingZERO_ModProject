#include "KoratImpactLocator.h"
#include "Components/SceneComponent.h"

AKoratImpactLocator::AKoratImpactLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));
    this->TransformType = EKoratImpactTransformType::ImpactHand1;
    this->RootCompo = (USceneComponent*)RootComponent;
    this->bOwnerSequencerDestroy = false;
    this->bNeedCheckAttachObjects = false;
}

void AKoratImpactLocator::OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence) {
}


