#pragma once
#include "CoreMinimal.h"
#include "KoratBannerDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBannerDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBannerDataList();
};

