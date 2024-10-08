#pragma once
#include "CoreMinimal.h"
#include "KoratMapStreamingPoolSizeData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMapStreamingPoolSizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    FKoratMapStreamingPoolSizeData();
};

