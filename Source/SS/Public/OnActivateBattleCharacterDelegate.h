#pragma once
#include "CoreMinimal.h"
#include "OnActivateBattleCharacterDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivateBattleCharacter, ASSCharacter*, InCharacter);

