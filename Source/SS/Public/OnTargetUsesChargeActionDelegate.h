#pragma once
#include "CoreMinimal.h"
#include "OnTargetUsesChargeActionDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTargetUsesChargeAction, ASSCharacter*, InTarget, const bool, InFirst);

