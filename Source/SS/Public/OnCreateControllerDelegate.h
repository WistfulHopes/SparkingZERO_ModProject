#pragma once
#include "CoreMinimal.h"
#include "OnCreateControllerDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateController, AController*, InCreateController);

