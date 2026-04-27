#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleState.h"
#include "OnSparkingBGMDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSparkingBGM, ECharacterBattleState, InOldState, ECharacterBattleState, InNewState, ASSCharacter*, InCharacter);

