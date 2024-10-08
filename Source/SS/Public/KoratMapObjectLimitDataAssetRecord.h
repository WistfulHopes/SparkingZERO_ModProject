#pragma once
#include "CoreMinimal.h"
#include "KoratMapObjectLimitDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapObjectLimitDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RealLimit;
    
    SS_API FKoratMapObjectLimitDataAssetRecord();
};

