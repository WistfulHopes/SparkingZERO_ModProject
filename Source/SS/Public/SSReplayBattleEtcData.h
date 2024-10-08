#pragma once
#include "CoreMinimal.h"
#include "SSReplayBattleEtcData.generated.h"

USTRUCT(BlueprintType)
struct FSSReplayBattleEtcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 likeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numObservers;
    
    SS_API FSSReplayBattleEtcData();
};

