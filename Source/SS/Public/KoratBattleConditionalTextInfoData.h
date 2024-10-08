#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConditionalTextInfoData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleConditionalTextInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TableNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirectionIndexNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionNo;
    
    SS_API FKoratBattleConditionalTextInfoData();
};

