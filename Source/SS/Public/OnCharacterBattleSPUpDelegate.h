#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleSPUpDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBattleSPUp, ASSCharacter*, InCharacter, float, InUpValue);

