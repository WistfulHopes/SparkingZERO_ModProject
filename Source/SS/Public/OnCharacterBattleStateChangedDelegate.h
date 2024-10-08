#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleState.h"
#include "OnCharacterBattleStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBattleStateChanged, ECharacterBattleState, InOldState, ECharacterBattleState, InNewState);

