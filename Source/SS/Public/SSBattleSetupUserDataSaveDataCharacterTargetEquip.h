#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupUserDataSaveDataCharacterEquip.h"
#include "SSBattleSetupUserDataSaveDataCharacterTargetEquip.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveDataCharacterTargetEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleSetupUserDataSaveDataCharacterEquip> TargetSettings;
    
    SS_API FSSBattleSetupUserDataSaveDataCharacterTargetEquip();
};

