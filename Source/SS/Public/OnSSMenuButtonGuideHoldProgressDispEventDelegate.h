#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonGuideHoldProgressDispEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSMenuButtonGuideHoldProgressDispEvent, USSMenuButton*, InButton, float, InProgress);

