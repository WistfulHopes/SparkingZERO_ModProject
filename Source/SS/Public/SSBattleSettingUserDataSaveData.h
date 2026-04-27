#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRule.h"
#include "EKoratMaxDPType.h"
#include "SSBattleSettingUserDataSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSettingUserDataSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleMemberRule NormalBattleMemberRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleMemberRule> BattleMemberRuleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMaxDPType NormalBattleMaxDP;
    
    SS_API FSSBattleSettingUserDataSaveData();
};

