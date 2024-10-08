#pragma once
#include "CoreMinimal.h"
#include "CallOnSpDirectSliderChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnSpDirectSliderChanged, float, ValueFloat);

