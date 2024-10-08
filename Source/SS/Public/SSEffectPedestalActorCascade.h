#pragma once
#include "CoreMinimal.h"
#include "SSEffectPedestalActorBase.h"
#include "SSEffectPedestalActorCascade.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ASSEffectPedestalActorCascade : public ASSEffectPedestalActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SettingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Emitter;
    
public:
    ASSEffectPedestalActorCascade(const FObjectInitializer& ObjectInitializer);

};

