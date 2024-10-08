#pragma once
#include "CoreMinimal.h"
#include "SSOptionButtonKeyInputItemEntry.h"
#include "OnSSOptionButtonKeyInputOnChangeValueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionButtonKeyInputOnChangeValueEvent, const FSSOptionButtonKeyInputItemEntry&, InChangeItem);

