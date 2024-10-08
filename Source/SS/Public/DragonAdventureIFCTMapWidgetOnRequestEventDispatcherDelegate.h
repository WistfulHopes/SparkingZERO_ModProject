#pragma once
#include "CoreMinimal.h"
#include "DragonAdventureIFCTMapWidgetOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragonAdventureIFCTMapWidgetOnRequestEventDispatcher, const int32, InRequest);

