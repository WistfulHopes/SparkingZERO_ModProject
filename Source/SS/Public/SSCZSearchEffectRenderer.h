#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratBattleSearchFactor.h"
#include "EKoratBattleSearchStatus.h"
#include "KoratSearchData.h"
#include "SSCZSearchEffectRenderer.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class USSCharacterStencilParams;

UCLASS(Blueprintable, Transient)
class ASSCZSearchEffectRenderer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSCharacter> DependentSourceCharacterPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSearchStatus, TSoftObjectPtr<ASSLevelSequenceActor>> SequenceActorPtrMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSLevelSequenceActor> AuraSearchEffectSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterStencilParams* IlluminationStencilParam;
    
public:
    ASSCZSearchEffectRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSearchStateChangedMyself(const ASSCharacter* InCharacter, const FKoratSearchData& InSearchData, EKoratBattleSearchFactor InFactor);
    
};

