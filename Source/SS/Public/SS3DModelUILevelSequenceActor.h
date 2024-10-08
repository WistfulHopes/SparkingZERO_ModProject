#pragma once
#include "CoreMinimal.h"
#include "SSLevelSequenceActor.h"
#include "SS3DModelUILevelSequenceActor.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class ASS3DModelUILevelSequenceActor : public ASSLevelSequenceActor {
    GENERATED_BODY()
public:
    ASS3DModelUILevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* PlayLevelSequence(ULevelSequence* InLevelSequence);
    
};

