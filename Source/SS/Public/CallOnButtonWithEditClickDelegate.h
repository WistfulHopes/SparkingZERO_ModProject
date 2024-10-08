#pragma once
#include "CoreMinimal.h"
#include "CallOnButtonWithEditClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallOnButtonWithEditClick, const FText&, OnClickEvent);

