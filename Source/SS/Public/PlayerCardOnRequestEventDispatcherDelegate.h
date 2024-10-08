#pragma once
#include "CoreMinimal.h"
#include "PlayerCardOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCardOnRequestEventDispatcher, const int32, InRequest);

