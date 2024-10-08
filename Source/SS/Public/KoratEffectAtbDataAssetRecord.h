#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratEffectAtbDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotUseDefaultAsset;
    
    SS_API FKoratEffectAtbDataAssetRecord();
};

