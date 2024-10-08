#pragma once
#include "CoreMinimal.h"
#include "DragonAdventureIFCTMapManagerOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragonAdventureIFCTMapManagerOnRequestEventDispatcher, const int32, InRequest);

