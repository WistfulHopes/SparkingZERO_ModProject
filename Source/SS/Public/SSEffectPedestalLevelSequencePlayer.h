#pragma once
#include "CoreMinimal.h"
#include "SSEffectPedestalLevelSequencePlayer.generated.h"

class ASSLevelSequenceActor;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEffectPedestalLevelSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
public:
    SS_API FSSEffectPedestalLevelSequencePlayer();
};

