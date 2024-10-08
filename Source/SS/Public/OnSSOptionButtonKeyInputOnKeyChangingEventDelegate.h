#pragma once
#include "CoreMinimal.h"
#include "OnSSOptionButtonKeyInputOnKeyChangingEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionButtonKeyInputOnKeyChangingEvent, USSMenuButton*, InKeyButton);

