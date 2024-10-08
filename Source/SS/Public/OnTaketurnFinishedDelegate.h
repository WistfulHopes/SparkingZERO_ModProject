#pragma once
#include "CoreMinimal.h"
#include "OnTaketurnFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaketurnFinished, float, InRequiredMinimum);

