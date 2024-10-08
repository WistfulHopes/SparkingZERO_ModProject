#pragma once
#include "CoreMinimal.h"
#include "OnPawnAiDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnAi, APawn*, InCharacter);

