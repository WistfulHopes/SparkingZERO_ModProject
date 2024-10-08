#pragma once
#include "CoreMinimal.h"
#include "OnSSTimeLineKeyIDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSTimeLineKeyID, int32, InKeyId);

