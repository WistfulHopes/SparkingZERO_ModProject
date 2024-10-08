#pragma once
#include "CoreMinimal.h"
#include "SSCharacterLatentEventDelegateDelegate.generated.h"

class USSCharacterLatentHelper;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSSCharacterLatentEventDelegate, USSCharacterLatentHelper*, InLatentHelper);

