#pragma once
#include "CoreMinimal.h"
#include "KoratShopBannerEntry.generated.h"

class USSBannerDataAsset;

USTRUCT(BlueprintType)
struct FKoratShopBannerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bannerSetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bannerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBannerDataAsset* bannerData;
    
    SS_API FKoratShopBannerEntry();
};

