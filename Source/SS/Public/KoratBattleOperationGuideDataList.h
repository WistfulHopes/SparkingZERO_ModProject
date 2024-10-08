#pragma once
#include "CoreMinimal.h"
#include "KoratBattleOperationGuideDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleOperationGuideDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleOperationGuideDataList();
};

