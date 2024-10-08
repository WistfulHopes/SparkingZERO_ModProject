#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonGaugeAlphaOnChangeValueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonGaugeAlphaOnChangeValueEvent, const float, InChangeGauge);

