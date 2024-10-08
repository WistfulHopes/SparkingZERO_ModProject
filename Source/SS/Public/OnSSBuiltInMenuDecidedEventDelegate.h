#pragma once
#include "CoreMinimal.h"
#include "SSBuiltInMenuItem.h"
#include "OnSSBuiltInMenuDecidedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSBuiltInMenuDecidedEvent, int32, InIndex, const FSSBuiltInMenuItem&, InItem);

