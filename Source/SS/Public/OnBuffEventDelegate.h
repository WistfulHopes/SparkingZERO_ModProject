#pragma once
#include "CoreMinimal.h"
#include "EKoratBuffNotifyType.h"
#include "KoratBuffId.h"
#include "KoratUnitBuffInfo.h"
#include "OnBuffEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBuffEvent, const FKoratBuffId&, InBuffId, const FKoratUnitBuffInfo&, InBuffInfo, EKoratBuffNotifyType, InNotifyType);

