#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSBattleSetupUserDataCharacterSortFilter.h"
#include "SSBattleSetupUserDataCustomizeBuildupItemMySets.h"
#include "SSBattleSetupUserDataSaveDataCharacterTargetEquip.h"
#include "SSBattleSetupUserDataSaveDataTargetTeaming.h"
#include "SSBattleSetupUserDataTeamingMySets.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataTeamingMySets TeamingMySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataCharacterSortFilter CharacterSortFilter;
    
    SS_API FSSBattleSetupUserDataSaveData();
};

