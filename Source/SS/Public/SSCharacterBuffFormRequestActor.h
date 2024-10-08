#pragma once
#include "CoreMinimal.h"
#include "KoratExecuteActorBase.h"
#include "SSBuffFormRequest.h"
#include "SSCharacterBuffFormRequestActor.generated.h"

UCLASS(Blueprintable)
class ASSCharacterBuffFormRequestActor : public AKoratExecuteActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBuffFormRequest Request;
    
    ASSCharacterBuffFormRequestActor(const FObjectInitializer& ObjectInitializer);

};

