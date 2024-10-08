#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticRebindType.h"
#include "SSDRMEditUniqueSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct SS_API FSSDRMEditUniqueSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticRebindType RebindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    FSSDRMEditUniqueSequence();
};

