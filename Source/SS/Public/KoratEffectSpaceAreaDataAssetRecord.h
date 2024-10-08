#pragma once
#include "CoreMinimal.h"
#include "KoratEffectSpaceAreaDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectSpaceAreaDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    SS_API FKoratEffectSpaceAreaDataAssetRecord();
};

