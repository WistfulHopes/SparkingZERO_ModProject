#include "SSBattleImpactParticleEffect.h"

USSBattleImpactParticleEffect::USSBattleImpactParticleEffect() {
    this->LevelSequence = NULL;
    this->BoostCount = 0;
}

void USSBattleImpactParticleEffect::StopLevelSequence() {
}

void USSBattleImpactParticleEffect::SetLevelSequenceTransform(const FTransform& NewTransform) {
}

void USSBattleImpactParticleEffect::SetBoostCount(int32 InBoostCount) {
}

void USSBattleImpactParticleEffect::PlayLevelSequence(UWorld* World, ASSCharacter* InCharacter, const TSoftObjectPtr<ULevelSequence> InLevelSequence, UObject* SourceObject) {
}

bool USSBattleImpactParticleEffect::IsLevelSequencePlaying() const {
    return false;
}

int32 USSBattleImpactParticleEffect::GetBoostCount() const {
    return 0;
}


