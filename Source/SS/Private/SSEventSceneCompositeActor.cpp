#include "SSEventSceneCompositeActor.h"

ASSEventSceneCompositeActor::ASSEventSceneCompositeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->StartSubscene = 0;
    this->TransitionSequence = NULL;
    this->BattleData = NULL;
}


