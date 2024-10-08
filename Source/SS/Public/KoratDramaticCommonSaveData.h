#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticCommonSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticCommonSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    FKoratDramaticCommonSaveData();
};

