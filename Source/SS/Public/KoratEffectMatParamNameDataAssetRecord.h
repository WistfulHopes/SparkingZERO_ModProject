#pragma once
#include "CoreMinimal.h"
#include "KoratEffectMatParamNameDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectMatParamNameDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetVName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    SS_API FKoratEffectMatParamNameDataAssetRecord();
};

