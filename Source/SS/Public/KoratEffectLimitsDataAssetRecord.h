#pragma once
#include "CoreMinimal.h"
#include "KoratEffectLimitsDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectLimitsDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    SS_API FKoratEffectLimitsDataAssetRecord();
};

