#pragma once
#include "CoreMinimal.h"
#include "OnSSViewScrollSideChangerButtonValueChangeEventDelegate.generated.h"

class USSMenuButton;
class USSRemoteButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSSViewScrollSideChangerButtonValueChangeEvent, USSMenuButton*, InHitButton, USSRemoteButton*, InRemoteButton, int32, InDataIndex);

