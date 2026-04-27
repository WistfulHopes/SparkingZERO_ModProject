#include "SSBattleSetupLevelScriptActorBase.h"

ASSBattleSetupLevelScriptActorBase::ASSBattleSetupLevelScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLevelSequenceActor = NULL;
    this->CurrentTransitionLevelSequenceActor = NULL;
    this->NextIdleLevelSequence = NULL;
    this->CameraAttachRootActor = NULL;
    this->CameraFocusAttachActor = NULL;
    this->CameraOffsetLocationActor = NULL;
    this->CameraLookAtNullOffsetActor = NULL;
}


