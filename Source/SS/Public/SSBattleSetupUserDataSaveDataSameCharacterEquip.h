#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSBattleSetupUserDataSaveDataSameCharacterEquip.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveDataSameCharacterEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> EquipItems;
    
    SS_API FSSBattleSetupUserDataSaveDataSameCharacterEquip();
};

