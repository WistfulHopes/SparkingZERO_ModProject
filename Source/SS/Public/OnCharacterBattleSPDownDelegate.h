#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleSPDownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBattleSPDown, float, InDownValue);

