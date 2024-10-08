#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "KoratBattleZItemUnLockChkData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleZItemUnLockChkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> AddUnLockZItem;
    
    SS_API FKoratBattleZItemUnLockChkData();
};

