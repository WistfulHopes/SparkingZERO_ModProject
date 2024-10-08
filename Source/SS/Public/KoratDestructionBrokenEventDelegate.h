#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionBrokenEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKoratDestructionBrokenEvent, const AActor*, Actor);

