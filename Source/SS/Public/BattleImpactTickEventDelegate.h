#pragma once
#include "CoreMinimal.h"
#include "BattleImpactTickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBattleImpactTickEvent, float, DeltaTime);

