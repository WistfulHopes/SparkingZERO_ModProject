#pragma once
#include "CoreMinimal.h"
#include "SSPlayerController.h"
#include "SSMenuPlayerController.generated.h"

UCLASS(Blueprintable)
class ASSMenuPlayerController : public ASSPlayerController {
    GENERATED_BODY()
public:
    ASSMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

