#pragma once
#include "CoreMinimal.h"
#include "NiagaraActor.h"
#include "KoratNiagaraActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AKoratNiagaraActor : public ANiagaraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootComponent;
    
public:
    AKoratNiagaraActor(const FObjectInitializer& ObjectInitializer);

};

