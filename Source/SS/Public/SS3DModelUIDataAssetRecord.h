#pragma once
#include "CoreMinimal.h"
#include "SS3DModelUIDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSS3DModelUIDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequencer;
    
    SS_API FSS3DModelUIDataAssetRecord();
};

