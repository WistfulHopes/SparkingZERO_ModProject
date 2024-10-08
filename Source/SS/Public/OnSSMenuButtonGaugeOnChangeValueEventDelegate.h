#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonGaugeOnChangeValueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonGaugeOnChangeValueEvent, const float, InChangeGauge);

