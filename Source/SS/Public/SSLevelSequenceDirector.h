#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceDirector.h"
#include "ESSLevelSequenceDirectorEffectRotationBase.h"
#include "Templates/SubclassOf.h"
#include "SSLevelSequenceDirector.generated.h"

class AActor;
class ASSCharacter;
class ASSEffectActorBase;
class UParticleSystem;
class USSLevelSequencePlayer;

UCLASS(Blueprintable)
class USSLevelSequenceDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    USSLevelSequenceDirector();

protected:
    UFUNCTION(BlueprintCallable)
    void StopEffect(ASSCharacter* Character, const FName ManagedId);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnEffect(TSubclassOf<ASSEffectActorBase> Class, ASSCharacter* Character, UParticleSystem* PsEffectTemplate, FName ManagedId, bool bAttached, FName InSocketName, ESSLevelSequenceDirectorEffectRotationBase InRotationBase, const FRotator InRotatorOffset);
    
    UFUNCTION(BlueprintCallable)
    USSLevelSequencePlayer* GetPlayer();
    
};

