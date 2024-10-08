#include "KoratGenericLocator.h"
#include "Components/SceneComponent.h"

AKoratGenericLocator::AKoratGenericLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));
    this->TransformType = EKoratGenericCenterTransformType::Null;
    this->RootCompo = (USceneComponent*)RootComponent;
    this->LocationRate = 0.50f;
    this->bUpdateFlag = true;
    this->MainCharacter = NULL;
    this->bOwnerSequencerDestroy = false;
    this->bNeedCheckAttachObjects = false;
}

void AKoratGenericLocator::OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence) {
}


