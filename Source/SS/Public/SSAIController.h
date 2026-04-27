#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SSAIController.generated.h"

class ASSEffectActorInFrontOfTheCamera;

UCLASS(Blueprintable)
class ASSAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEffectActorInFrontOfTheCamera* EffectInFrontOfTheCamera;
    
public:
    ASSAIController(const FObjectInitializer& ObjectInitializer);

};

