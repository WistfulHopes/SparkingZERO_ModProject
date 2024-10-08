#pragma once
#include "CoreMinimal.h"
#include "CallOnSpDirectValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnSpDirectValueChanged, float, InOnValueChanged);

