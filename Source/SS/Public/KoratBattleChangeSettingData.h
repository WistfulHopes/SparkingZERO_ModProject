#pragma once
#include "CoreMinimal.h"
#include "EKoratAllComLevelSetting.h"
#include "EKoratCommonOnOffType.h"
#include "KoratBattleChangeSettingData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleChangeSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratAllComLevelSetting AllComLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCommonOnOffType AllFormChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCommonOnOffType AllCombine;
    
    SS_API FKoratBattleChangeSettingData();
};

