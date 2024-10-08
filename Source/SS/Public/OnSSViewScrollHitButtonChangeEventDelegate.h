#pragma once
#include "CoreMinimal.h"
#include "OnSSViewScrollHitButtonChangeEventDelegate.generated.h"

class USSMenuButton;
class USSRemoteButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSSViewScrollHitButtonChangeEvent, USSMenuButton*, InHitButton, USSRemoteButton*, InRemoteButton, int32, InDataIndex);

