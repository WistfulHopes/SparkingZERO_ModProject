#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonImageItemEntry.h"
#include "OnSSMenuButtonImageOnChangeValueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonImageOnChangeValueEvent, const FSSMenuButtonImageItemEntry&, InChangeItem);

