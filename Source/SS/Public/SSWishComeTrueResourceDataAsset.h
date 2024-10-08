#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSWCTResourceDataAssetRecord.h"
#include "SSWishComeTrueResourceDataAsset.generated.h"

UCLASS(Blueprintable)
class USSWishComeTrueResourceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSWCTResourceDataAssetRecord> Records;
    
public:
    USSWishComeTrueResourceDataAsset();

};

