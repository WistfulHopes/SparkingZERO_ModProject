#pragma once
#include "CoreMinimal.h"
#include "KoratTimeScaleComponent.h"
#include "KoratEmitterTimeScaleComponent.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratEmitterTimeScaleComponent : public UKoratTimeScaleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitterStopTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayEmitterStopTick;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TargetParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TargetNiagaraSystem;
    
public:
    UKoratEmitterTimeScaleComponent(const FObjectInitializer& ObjectInitializer);

};

