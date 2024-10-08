#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SSBattleImpactParticleEffect.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class ULevelSequence;
class UWorld;

UCLASS(Blueprintable)
class USSBattleImpactParticleEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostCount;
    
    USSBattleImpactParticleEffect();

    UFUNCTION(BlueprintCallable)
    void StopLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSequenceTransform(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetBoostCount(int32 InBoostCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequence(UWorld* World, ASSCharacter* InCharacter, const TSoftObjectPtr<ULevelSequence> InLevelSequence, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelSequencePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoostCount() const;
    
};

