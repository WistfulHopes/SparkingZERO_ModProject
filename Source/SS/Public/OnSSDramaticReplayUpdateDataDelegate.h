#pragma once
#include "CoreMinimal.h"
#include "OnSSDramaticReplayUpdateDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSDramaticReplayUpdateData, bool, bIsClear);

