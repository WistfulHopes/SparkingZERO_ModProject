#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonImageDecidedNewEventDelegate.generated.h"

class USSMenuButtonImage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMenuButtonImageDecidedNewEvent, USSMenuButtonImage*, InButton);

