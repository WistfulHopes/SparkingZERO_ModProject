#pragma once
#include "CoreMinimal.h"
#include "BattleAngleSpeedData.generated.h"

USTRUCT(BlueprintType)
struct FBattleAngleSpeedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapseTime;
    
    SS_API FBattleAngleSpeedData();
};

