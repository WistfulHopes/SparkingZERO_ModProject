#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "KoratSeqActorUtilityComponent.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratSeqActorUtilityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyLocator;
    
    UKoratSeqActorUtilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PSCFinished(UParticleSystemComponent* FinishCompo);
    
    UFUNCTION(BlueprintCallable)
    void PSCDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void DelegateWhenSequenceFinish();
    
};

