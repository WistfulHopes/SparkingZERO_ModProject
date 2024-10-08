#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCharacter.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* ActionSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraSequencer;
    
    SS_API FSSDragonAdventureIFCharacter();
};

