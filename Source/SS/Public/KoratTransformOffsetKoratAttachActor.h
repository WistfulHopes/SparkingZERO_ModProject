#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratTransformOffsetKoratAttachActor.generated.h"

UCLASS(Blueprintable)
class AKoratTransformOffsetKoratAttachActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOwnerSequencerDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedCheckAttachObjects;
    
    AKoratTransformOffsetKoratAttachActor(const FObjectInitializer& ObjectInitializer);

};

