#pragma once
#include "CoreMinimal.h"
#include "OnPlaySparkingBGMDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaySparkingBGM, int32, InPlayerNumber);

