#pragma once
#include "CoreMinimal.h"
#include "OnCharacterChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterChange, int32, InPlaySide);

