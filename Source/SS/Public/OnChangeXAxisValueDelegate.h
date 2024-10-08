#pragma once
#include "CoreMinimal.h"
#include "OnChangeXAxisValueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeXAxisValue, float, InChangeValue);

