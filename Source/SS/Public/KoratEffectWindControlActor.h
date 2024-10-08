#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratEffectWindVelocity.h"
#include "KoratEffectWindControlActor.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class AKoratEffectWindControlActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindMid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindHigh;
    
public:
    AKoratEffectWindControlActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateWind();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FKoratEffectWindVelocity BP_GetWindVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UParticleSystemComponent*> BP_GetParticles() const;
    
};

