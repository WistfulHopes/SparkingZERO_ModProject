#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubsceneSequenceCO.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FSSEventSceneSubsceneSequenceCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* Instance;
    
    SS_API FSSEventSceneSubsceneSequenceCO();
};

