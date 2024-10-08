#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingSettingDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleTrainingSettingDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleTrainingSettingDataList();
};

