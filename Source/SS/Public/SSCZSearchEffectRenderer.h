#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratBattleSearchFactor.h"
#include "EKoratBattleSearchStatus.h"
#include "KoratSearchData.h"
#include "SSCZSearchEffectRenderer.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSCZSearchEffectRenderer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSCharacter> DependentSourceCharacterPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSearchStatus, TSoftObjectPtr<ASSLevelSequenceActor>> SequenceActorPtrMap;
    
public:
    ASSCZSearchEffectRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSearchStateChanged(const ASSCharacter* InCharacter, const FKoratSearchData& InSearchData, EKoratBattleSearchFactor InFactor);
    
};

