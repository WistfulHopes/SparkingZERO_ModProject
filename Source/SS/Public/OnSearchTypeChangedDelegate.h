#pragma once
#include "CoreMinimal.h"
#include "OnSearchTypeChangedDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchTypeChanged, const ASSCharacter*, InCharacter);

