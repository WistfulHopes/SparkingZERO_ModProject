#pragma once
#include "CoreMinimal.h"
#include "CallOnTextChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnTextChanged, const FText&, InTextChanged);

