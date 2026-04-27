#pragma once
#include "CoreMinimal.h"
#include "OnSSViewScrollButtonChangeAnimEventDelegate.generated.h"

class USSRemoteButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSViewScrollButtonChangeAnimEvent, USSRemoteButton*, InButton, int32, InDataIndex);

