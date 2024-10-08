#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "OnInputSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInputSuccess, const int32, InIndex, const EKoratBattleKey, InBattleKey, const FName, InMenuName);

