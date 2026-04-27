#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleDamageReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBattleDamageReceived, float, InDamage, bool, InGuardSuccess);

