#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonHoldProgressDispEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSMenuButtonHoldProgressDispEvent, USSMenuButton*, InButton, float, InProgress);

