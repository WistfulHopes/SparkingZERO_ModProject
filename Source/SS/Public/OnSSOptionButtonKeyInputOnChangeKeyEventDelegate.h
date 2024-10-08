#pragma once
#include "CoreMinimal.h"
#include "OnSSOptionButtonKeyInputOnChangeKeyEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionButtonKeyInputOnChangeKeyEvent, USSMenuButton*, InKeyButton);

