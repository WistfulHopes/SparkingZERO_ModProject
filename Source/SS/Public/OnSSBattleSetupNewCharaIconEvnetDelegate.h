#pragma once
#include "CoreMinimal.h"
#include "OnSSBattleSetupNewCharaIconEvnetDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSSBattleSetupNewCharaIconEvnet, UObject*, InObject, int32, InPlaySide, int32, InMemberIndex);

