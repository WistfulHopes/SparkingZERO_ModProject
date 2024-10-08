#pragma once
#include "CoreMinimal.h"
#include "KoratVelocityLineEffectPlay.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FKoratVelocityLineEffectPlay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSLevelSequenceActor> SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    SS_API FKoratVelocityLineEffectPlay();
};

