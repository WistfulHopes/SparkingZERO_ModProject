#pragma once
#include "CoreMinimal.h"
#include "KoratBuffCategoryDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBuffCategoryDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlapMaxNum;
    
    SS_API FKoratBuffCategoryDataAssetRecord();
};

