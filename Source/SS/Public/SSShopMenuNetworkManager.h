#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSShopMenuNetworkManager.generated.h"

class USSBannerDataAsset;

UCLASS(Blueprintable)
class USSShopMenuNetworkManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSBannerDataAsset*> testBannerData;
    
    USSShopMenuNetworkManager();

};

