#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtomSoundData.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, MinimalAPI)
class AAtomSoundData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    AAtomSoundData(const FObjectInitializer& ObjectInitializer);

};

