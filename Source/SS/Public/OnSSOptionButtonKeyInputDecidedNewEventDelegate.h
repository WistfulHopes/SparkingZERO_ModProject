#pragma once
#include "CoreMinimal.h"
#include "OnSSOptionButtonKeyInputDecidedNewEventDelegate.generated.h"

class USSMenuButtonText;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSOptionButtonKeyInputDecidedNewEvent, USSMenuButtonText*, InButton);

