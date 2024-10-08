#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSCharaSelectCharaIconEvnetDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSCharaSelectCharaIconEvnet, UObject*, InObject, const FKoratCharacterDataList&, InCharacterData);

