#pragma once
#include "CoreMinimal.h"
#include "OnChangeCharacterDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnChangeCharacter, int32, InPlayerNumber, ASSCharacter*, InOldCharacter, ASSCharacter*, InNewCharacter, bool, bInSamePerson);

