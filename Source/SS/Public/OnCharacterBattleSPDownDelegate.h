#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBattleSPDownDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBattleSPDown, ASSCharacter*, InCharacter, float, InDownValue);

