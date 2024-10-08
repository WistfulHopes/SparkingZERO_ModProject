#include "SSCharacterActionManagerForLevelSequence.h"

USSCharacterActionManagerForLevelSequence::USSCharacterActionManagerForLevelSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRequestHideCurrentActionSequence = false;
}

void USSCharacterActionManagerForLevelSequence::SetNextSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionNameToChange, const FName InNextSectionName) {
}

void USSCharacterActionManagerForLevelSequence::JumpSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName) {
}

ASSLevelSequenceActor* USSCharacterActionManagerForLevelSequence::GetCharacterActionSequenceActor(FKoratActionDataList InAction) const {
    return NULL;
}

void USSCharacterActionManagerForLevelSequence::ExecuteSpawnAndDestroyRequestCharacterActionSequenceActor() {
}

void USSCharacterActionManagerForLevelSequence::DestroyRequestCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void USSCharacterActionManagerForLevelSequence::DestroyRequestActionSequenceActorAll() {
}

void USSCharacterActionManagerForLevelSequence::DestroyCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void USSCharacterActionManagerForLevelSequence::ChangedSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName, const float InPlayRatio) {
}

void USSCharacterActionManagerForLevelSequence::AfterglowLevelActionSequenceActorEndConfirm() {
}


