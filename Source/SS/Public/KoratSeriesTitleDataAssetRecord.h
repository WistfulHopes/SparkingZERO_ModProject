#pragma once
#include "CoreMinimal.h"
#include "KoratSeriesTitleDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSeriesTitleDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FKoratSeriesTitleDataAssetRecord();
};

