#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingCommandDataList.h"
#include "SSBattleTrainingData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSBattleTrainingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBattleTrainingCommandDataList, int32> CommandPlayCount;
    
    FSSBattleTrainingData();
};

