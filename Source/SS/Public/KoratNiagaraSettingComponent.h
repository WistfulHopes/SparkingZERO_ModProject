#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratNiagaraSettingComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratNiagaraSettingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CacheComponent;
    
public:
    UKoratNiagaraSettingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentActivated(UActorComponent* InComponent, const bool bInReset);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplySettings(const bool bInForceApply);
    
};

