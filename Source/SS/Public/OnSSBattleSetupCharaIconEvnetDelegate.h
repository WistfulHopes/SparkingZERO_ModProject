#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSBattleSetupCharaIconEvnetDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSBattleSetupCharaIconEvnet, UObject*, InObject, const FKoratCharacterDataList&, InCharacterData);

