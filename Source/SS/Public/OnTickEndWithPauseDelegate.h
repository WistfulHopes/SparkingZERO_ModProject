#pragma once
#include "CoreMinimal.h"
#include "OnTickEndWithPauseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTickEndWithPause, const float, InDeltaTime, const bool, InPause);

