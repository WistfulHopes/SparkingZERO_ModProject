#pragma once
#include "CoreMinimal.h"
#include "OnBgmManagerReadyDelegate.generated.h"

class ASSBGMManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBgmManagerReady, ASSBGMManager*, InBgmManager);

