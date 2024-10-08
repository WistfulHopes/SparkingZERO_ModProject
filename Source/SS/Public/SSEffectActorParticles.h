#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSEffectActorBase.h"
#include "SSEffectActorParticles.generated.h"

class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ASSEffectActorParticles : public ASSEffectActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereRootCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* PsEffectTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NsEffectTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InRotatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PsEffectComponent;
    
    ASSEffectActorParticles(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void AddEffect(UParticleSystem* InEffectTemplate);
    
};

