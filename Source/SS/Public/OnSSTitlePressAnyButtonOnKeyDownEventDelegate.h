#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "OnSSTitlePressAnyButtonOnKeyDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSTitlePressAnyButtonOnKeyDownEvent, const FKey&, InKey);

