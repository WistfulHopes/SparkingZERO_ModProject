#pragma once
#include "CoreMinimal.h"
#include "OnSSOptionButtonKeyInputOnKeyChangingCancelEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionButtonKeyInputOnKeyChangingCancelEvent, USSMenuButton*, InKeyButton);

