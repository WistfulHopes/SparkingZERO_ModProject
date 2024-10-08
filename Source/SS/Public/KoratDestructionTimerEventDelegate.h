#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionTimerEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FKoratDestructionTimerEvent, int32, DelayIndex, const FKoratDestructionFieldParameter&, DestructionFieldParameter);

