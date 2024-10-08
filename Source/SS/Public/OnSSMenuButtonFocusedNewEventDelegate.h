#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonFocusedNewEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonFocusedNewEvent, USSMenuButton*, InButton);

