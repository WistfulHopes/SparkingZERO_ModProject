#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleSparkingDownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBattleSparkingDown, float, InDownValue);

