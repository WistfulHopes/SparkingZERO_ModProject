#pragma once
#include "CoreMinimal.h"
#include "EWishCategory.h"
#include "MutualDataAsset.h"
#include "SSWishComeTrueCategoryDataAssetRecord.h"
#include "SSWishComeTrueCategoryDataAsset.generated.h"

UCLASS(Blueprintable)
class USSWishComeTrueCategoryDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWishCategory, FSSWishComeTrueCategoryDataAssetRecord> Records;
    
    USSWishComeTrueCategoryDataAsset();

};

