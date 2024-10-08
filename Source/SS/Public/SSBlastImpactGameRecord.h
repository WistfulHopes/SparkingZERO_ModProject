#pragma once
#include "CoreMinimal.h"
#include "SSBlastImpactGameRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSBlastImpactGameRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Camera;
    
    SS_API FSSBlastImpactGameRecord();
};

