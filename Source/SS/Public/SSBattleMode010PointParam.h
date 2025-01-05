#pragma once
#include "CoreMinimal.h"
#include "SSBattleMode010PointParam.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleMode010PointParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattlePassExp;
    
    SS_API FSSBattleMode010PointParam();
};

