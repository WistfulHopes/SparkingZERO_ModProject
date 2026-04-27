#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleGuardBreakDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBattleGuardBreak, float, InDamage);

