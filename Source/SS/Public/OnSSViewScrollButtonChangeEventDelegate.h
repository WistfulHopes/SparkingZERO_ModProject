#pragma once
#include "CoreMinimal.h"
#include "OnSSViewScrollButtonChangeEventDelegate.generated.h"

class USSRemoteButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSViewScrollButtonChangeEvent, USSRemoteButton*, InButton, int32, InDataIndex);

