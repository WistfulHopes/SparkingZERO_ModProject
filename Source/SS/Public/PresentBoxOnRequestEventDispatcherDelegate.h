#pragma once
#include "CoreMinimal.h"
#include "PresentBoxOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPresentBoxOnRequestEventDispatcher, const int32, InRequest);

