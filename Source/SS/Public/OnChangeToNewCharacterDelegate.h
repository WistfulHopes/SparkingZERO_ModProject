#pragma once
#include "CoreMinimal.h"
#include "OnChangeToNewCharacterDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChangeToNewCharacter, ASSCharacter*, InBefore, ASSCharacter*, InAfter, const bool, bInNewCharacter);

