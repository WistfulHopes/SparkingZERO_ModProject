#pragma once
#include "CoreMinimal.h"
#include "BattleReplayState.generated.h"

USTRUCT(BlueprintType)
struct FBattleReplayState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckSumsError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaying;
    
    SS_API FBattleReplayState();
};

