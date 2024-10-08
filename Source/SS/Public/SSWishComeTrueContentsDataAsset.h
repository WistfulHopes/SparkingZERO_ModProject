#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSWishComeTrueContentDataAssetRecord.h"
#include "SSWishComeTrueContentsDataAsset.generated.h"

UCLASS(Blueprintable)
class USSWishComeTrueContentsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSWishComeTrueContentDataAssetRecord> Records;
    
    USSWishComeTrueContentsDataAsset();

};

