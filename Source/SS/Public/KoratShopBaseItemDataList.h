#pragma once
#include "CoreMinimal.h"
#include "KoratShopBaseItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratShopBaseItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratShopBaseItemDataList();
};

