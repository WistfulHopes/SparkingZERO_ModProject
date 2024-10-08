#pragma once
#include "CoreMinimal.h"
#include "KoratPoolableActorBase.h"
#include "KoratPoolableRebindActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AKoratPoolableRebindActor : public AKoratPoolableActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOwnerSequencerDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedCheckAttachObjects;
    
    AKoratPoolableRebindActor(const FObjectInitializer& ObjectInitializer);

};

