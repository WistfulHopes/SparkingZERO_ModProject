#pragma once
#include "CoreMinimal.h"
#include "OnChangeCharacterDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeCharacter, int32, InPlayerNumber, ASSCharacter*, InNewCharacter);

