#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "MutualDataAsset.h"
#include "SSWishComeTrueDataAssetRecord.h"
#include "SSWishComeTrueDataAsset.generated.h"

UCLASS(Blueprintable)
class USSWishComeTrueDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDragonType, FSSWishComeTrueDataAssetRecord> Records;
    
    USSWishComeTrueDataAsset();

};

