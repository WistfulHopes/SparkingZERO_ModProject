#pragma once
#include "CoreMinimal.h"
#include "OnSSBattleSetupTeamListCharaIconEvnetDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSSBattleSetupTeamListCharaIconEvnet, UObject*, InObject, int32, InPlaySide, int32, InMemberIndex);

