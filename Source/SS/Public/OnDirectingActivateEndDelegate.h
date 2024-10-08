#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingActivate.h"
#include "OnDirectingActivateEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDirectingActivateEnd, EKoratBattleDirectingActivate, InActivateType, int32, InOptionValue);

