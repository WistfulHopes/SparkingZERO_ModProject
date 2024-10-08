#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterEquipSettingSaveTarget.h"
#include "SSBattleSetupUserDataSaveDataTeamingCharacter.h"
#include "SSBattleSetupUserDataSaveDataTargetTeaming.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveDataTargetTeaming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratCharacterEquipSettingSaveTarget, FSSBattleSetupUserDataSaveDataTeamingCharacter> TargetTeaming;
    
    SS_API FSSBattleSetupUserDataSaveDataTargetTeaming();
};

