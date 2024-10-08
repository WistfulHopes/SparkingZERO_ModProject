#pragma once
#include "CoreMinimal.h"
#include "OnChangeActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeAction, FName, InNewAction);

