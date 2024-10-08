#pragma once
#include "CoreMinimal.h"
#include "SSWishComeTrueCategoryDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSWishComeTrueCategoryDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    SS_API FSSWishComeTrueCategoryDataAssetRecord();
};

