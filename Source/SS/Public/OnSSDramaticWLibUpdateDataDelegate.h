#pragma once
#include "CoreMinimal.h"
#include "OnSSDramaticWLibUpdateDataDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSDramaticWLibUpdateData, bool, bIsClear, const TArray<uint64>&, InBattleId);

