#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonSideChangerValueChangeEventDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonSideChangerValueChangeEvent, USSMenuButton*, InHitButton);

