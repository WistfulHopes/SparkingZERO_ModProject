#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrkDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectAtbBrkDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    SS_API FKoratEffectAtbBrkDataAssetRecord();
};

