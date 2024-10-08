#pragma once
#include "CoreMinimal.h"
#include "KoratBattleSetting.h"
#include "SSReplayDataBattleSetting.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSReplayDataBattleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetting BattleSetting;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PreFateVoiceId;
    
    FSSReplayDataBattleSetting();
};

