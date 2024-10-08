#pragma once
#include "CoreMinimal.h"
#include "OnSSOptionManagerTabLockEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionManagerTabLockEvent, bool, bInIsLock);

