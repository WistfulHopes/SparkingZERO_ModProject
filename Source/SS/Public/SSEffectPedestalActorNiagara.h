#pragma once
#include "CoreMinimal.h"
#include "SSEffectPedestalActorBase.h"
#include "SSEffectPedestalActorNiagara.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ASSEffectPedestalActorNiagara : public ASSEffectPedestalActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SettingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Emitter;
    
public:
    ASSEffectPedestalActorNiagara(const FObjectInitializer& ObjectInitializer);

};

