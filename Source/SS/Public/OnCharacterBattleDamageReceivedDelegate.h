#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleDamageReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBattleDamageReceived, float, InDamage);

