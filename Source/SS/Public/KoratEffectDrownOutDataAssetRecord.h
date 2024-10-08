#pragma once
#include "CoreMinimal.h"
#include "KoratEffectDrownOutDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectDrownOutDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DrownOutLevelSequence;
    
    SS_API FKoratEffectDrownOutDataAssetRecord();
};

