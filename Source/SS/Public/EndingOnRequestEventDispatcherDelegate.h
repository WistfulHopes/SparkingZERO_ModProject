#pragma once
#include "CoreMinimal.h"
#include "EndingOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndingOnRequestEventDispatcher, const int32, InRequest);

