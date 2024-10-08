#pragma once
#include "CoreMinimal.h"
#include "CallOnSpDirectCheckChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnSpDirectCheckChanged, bool, InOnCheckChanged);

