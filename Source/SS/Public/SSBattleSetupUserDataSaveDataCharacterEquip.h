#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSBattleSetupUserDataSaveDataSameCharacterEquip.h"
#include "SSBattleSetupUserDataSaveDataCharacterEquip.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveDataCharacterEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> EquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleSetupUserDataSaveDataSameCharacterEquip> SameCharacterEquip;
    
    SS_API FSSBattleSetupUserDataSaveDataCharacterEquip();
};

