#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonIndexOnChangeIndexDelegate.generated.h"

class USSMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSMenuButtonIndexOnChangeIndex, USSMenuButton*, InButton, const int32, InIndex);

