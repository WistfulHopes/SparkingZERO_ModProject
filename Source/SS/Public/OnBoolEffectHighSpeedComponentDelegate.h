#pragma once
#include "CoreMinimal.h"
#include "OnBoolEffectHighSpeedComponentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoolEffectHighSpeedComponent, bool, bHiddenInGame);

