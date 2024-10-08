#pragma once
#include "CoreMinimal.h"
#include "OnSSMissionUpdateStampEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSMissionUpdateStampEvent, int32, InNumber);

