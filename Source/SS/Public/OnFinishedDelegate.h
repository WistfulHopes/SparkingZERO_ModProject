#pragma once
#include "CoreMinimal.h"
#include "OnFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinished, const FName, InMenuName);

