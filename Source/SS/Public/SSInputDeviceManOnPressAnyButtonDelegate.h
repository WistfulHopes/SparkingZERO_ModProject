#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SSInputDeviceManOnPressAnyButtonDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSInputDeviceManOnPressAnyButton, const FKey&, InKey);

