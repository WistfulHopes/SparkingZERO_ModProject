#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratDecalActorManager.generated.h"

class ASSEffectDecalActor;

UCLASS(Blueprintable)
class UKoratDecalActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASSEffectDecalActor>> DecalActors;
    
public:
    UKoratDecalActorManager();

    UFUNCTION(BlueprintCallable)
    void ShowAll();
    
    UFUNCTION(BlueprintCallable)
    void HideAll();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAll();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

