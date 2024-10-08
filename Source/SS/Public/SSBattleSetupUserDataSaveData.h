#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSBattleSetupUserDataCustomizeBuildupItemMySets.h"
#include "SSBattleSetupUserDataSaveDataCharacterTargetEquip.h"
#include "SSBattleSetupUserDataSaveDataTargetTeaming.h"
#include "SSBattleSetupUserDataSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSBattleSetupUserDataSaveDataCharacterTargetEquip> Customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveDataTargetTeaming NormalTeaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveDataTargetTeaming SingleTeaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveDataTargetTeaming DPBattleTeaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataCustomizeBuildupItemMySets BuildupMySet;
    
    SS_API FSSBattleSetupUserDataSaveData();
};

