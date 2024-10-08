#pragma once
#include "CoreMinimal.h"
#include "KoratShopFloorDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratShopFloorDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratShopFloorDataList();
};

