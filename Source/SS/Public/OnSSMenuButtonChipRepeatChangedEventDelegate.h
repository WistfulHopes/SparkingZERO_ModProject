#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonChipRepeatChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonChipRepeatChangedEvent, bool, bRepeat);

