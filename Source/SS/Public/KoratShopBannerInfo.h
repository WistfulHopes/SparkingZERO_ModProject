#pragma once
#include "CoreMinimal.h"
#include "KoratShopBannerEntry.h"
#include "KoratShopBannerInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratShopBannerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratShopBannerEntry> Banners;
    
    SS_API FKoratShopBannerInfo();
};

