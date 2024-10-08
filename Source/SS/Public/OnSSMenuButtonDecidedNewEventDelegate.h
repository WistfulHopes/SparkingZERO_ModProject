#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonDecidedNewEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonDecidedNewEvent, USSMenuButton*, InButton);

