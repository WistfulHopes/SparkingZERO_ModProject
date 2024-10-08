#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "OnInputFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInputFailure, const int32, InIndex, const EKoratBattleKey, InBattleKey, const FName, InMenuName);

