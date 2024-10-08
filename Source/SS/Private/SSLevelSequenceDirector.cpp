#include "SSLevelSequenceDirector.h"
#include "Templates/SubclassOf.h"

USSLevelSequenceDirector::USSLevelSequenceDirector() {
}

void USSLevelSequenceDirector::StopEffect(ASSCharacter* Character, const FName ManagedId) {
}

AActor* USSLevelSequenceDirector::SpawnEffect(TSubclassOf<ASSEffectActorBase> Class, ASSCharacter* Character, UParticleSystem* PsEffectTemplate, FName ManagedId, bool bAttached, FName InSocketName, ESSLevelSequenceDirectorEffectRotationBase InRotationBase, const FRotator InRotatorOffset) {
    return NULL;
}

USSLevelSequencePlayer* USSLevelSequenceDirector::GetPlayer() {
    return NULL;
}


