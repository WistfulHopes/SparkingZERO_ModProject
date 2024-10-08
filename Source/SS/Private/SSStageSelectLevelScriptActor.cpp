#include "SSStageSelectLevelScriptActor.h"

ASSStageSelectLevelScriptActor::ASSStageSelectLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLevelSequenceActor = NULL;
    this->StageChangeLevelSequenceActor = NULL;
}


