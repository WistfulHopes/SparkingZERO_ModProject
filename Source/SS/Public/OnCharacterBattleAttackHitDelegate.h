#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleAttackHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBattleAttackHit, float, InDamage, bool, InGuardBreak);

