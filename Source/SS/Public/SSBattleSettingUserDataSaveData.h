#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRule.h"
#include "SSBattleSettingUserDataSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSettingUserDataSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleMemberRule NormalBattleMemberRule;
    
    SS_API FSSBattleSettingUserDataSaveData();
};

