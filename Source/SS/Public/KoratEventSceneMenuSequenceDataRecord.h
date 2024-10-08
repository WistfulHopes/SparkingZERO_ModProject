#pragma once
#include "CoreMinimal.h"
#include "KoratEventSceneMenuSequenceDataRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEventSceneMenuSequenceDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    SS_API FKoratEventSceneMenuSequenceDataRecord();
};

