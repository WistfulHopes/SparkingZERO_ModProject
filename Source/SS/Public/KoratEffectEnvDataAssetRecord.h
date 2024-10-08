#pragma once
#include "CoreMinimal.h"
#include "KoratEffectEnvDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectEnvDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceOut;
    
    SS_API FKoratEffectEnvDataAssetRecord();
};

