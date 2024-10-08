#pragma once
#include "CoreMinimal.h"
#include "OnActivatedCharacterDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivatedCharacter, ASSCharacter*, InCharacter);

