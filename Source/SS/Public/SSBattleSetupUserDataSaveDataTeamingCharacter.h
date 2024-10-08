#pragma once
#include "CoreMinimal.h"
#include "EKoratAllComLevelSetting.h"
#include "KoratCharacterDataList.h"
#include "SSBattleSetupUserDataSaveDataTeamingCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataSaveDataTeamingCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> TeamMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratAllComLevelSetting ComLevel;
    
    SS_API FSSBattleSetupUserDataSaveDataTeamingCharacter();
};

