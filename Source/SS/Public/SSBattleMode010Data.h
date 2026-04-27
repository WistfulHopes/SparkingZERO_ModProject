#pragma once
#include "CoreMinimal.h"
#include "ESSBattleMode010Difficulty.h"
#include "SSBattleMode010Data.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSBattleMode010Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CleardIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleMode010Difficulty, FDateTime> DefetedTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonNo;
    
    FSSBattleMode010Data();
};

