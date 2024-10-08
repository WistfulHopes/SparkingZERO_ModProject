#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingLinesDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleTrainingLinesDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleTrainingLinesDataList();
};

