#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSEffectAfterimageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSEffectAfterimageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSEffectAfterimageComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnParticleComponentActivated(UActorComponent* Comoponent, const bool bReset);
    
};

