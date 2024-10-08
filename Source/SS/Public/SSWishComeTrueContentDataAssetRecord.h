#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "EWishCategory.h"
#include "SSWishComeTrueContentDetails.h"
#include "SSWishComeTrueContentDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSWishComeTrueContentDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragonType DragonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWishCategory, FSSWishComeTrueContentDetails> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossibleRequestCount;
    
    FSSWishComeTrueContentDataAssetRecord();
};

