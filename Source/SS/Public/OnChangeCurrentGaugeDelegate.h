#pragma once
#include "CoreMinimal.h"
#include "OnChangeCurrentGaugeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCurrentGauge, float, InPercentage);

