#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleSPUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBattleSPUp, float, InUpValue);

