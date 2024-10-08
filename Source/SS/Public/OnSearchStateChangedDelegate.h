#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchFactor.h"
#include "KoratSearchData.h"
#include "OnSearchStateChangedDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSearchStateChanged, const ASSCharacter*, InCharacter, const FKoratSearchData&, InData, EKoratBattleSearchFactor, InFactor);

