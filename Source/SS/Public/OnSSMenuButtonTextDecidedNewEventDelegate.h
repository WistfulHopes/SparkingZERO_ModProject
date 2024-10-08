#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonTextDecidedNewEventDelegate.generated.h"

class USSMenuButtonText;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonTextDecidedNewEvent, USSMenuButtonText*, InButton);

