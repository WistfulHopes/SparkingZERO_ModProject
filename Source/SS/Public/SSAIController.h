#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SSAIController.generated.h"

UCLASS(Blueprintable)
class ASSAIController : public AAIController {
    GENERATED_BODY()
public:
    ASSAIController(const FObjectInitializer& ObjectInitializer);

};

