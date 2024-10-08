#pragma once
#include "CoreMinimal.h"
#include "KoratInteractKnockPlayData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratInteractKnockPlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> SequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueId;
    
    SS_API FKoratInteractKnockPlayData();
};

