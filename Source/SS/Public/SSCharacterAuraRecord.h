#pragma once
#include "CoreMinimal.h"
#include "SSCharacterAuraRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSCharacterAuraRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    SS_API FSSCharacterAuraRecord();
};

