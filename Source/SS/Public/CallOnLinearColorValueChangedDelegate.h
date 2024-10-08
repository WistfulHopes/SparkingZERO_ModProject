#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CallOnLinearColorValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnLinearColorValueChanged, FLinearColor, InOnColorChanged);

