#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleState.h"
#include "OnSparkingBGMDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSparkingBGM, ECharacterBattleState, InOldState, ECharacterBattleState, InNewState);

