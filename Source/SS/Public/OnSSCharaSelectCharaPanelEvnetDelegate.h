#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSCharaSelectCharaPanelEvnetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSSCharaSelectCharaPanelEvnet, const FKoratCharacterDataList&, InCharacterData);

