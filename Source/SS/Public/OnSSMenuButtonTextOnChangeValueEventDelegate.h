#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "OnSSMenuButtonTextOnChangeValueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonTextOnChangeValueEvent, const FSSMenuButtonTextItemEntry&, InChangeItem);

