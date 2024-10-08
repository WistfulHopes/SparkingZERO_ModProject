#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionLandedParameter.h"
#include "KoratDestructionLandedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKoratDestructionLandedEvent, AActor*, Actor, FKoratDestructionLandedParameter, LandedParams);

