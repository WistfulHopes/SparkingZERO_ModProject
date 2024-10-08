#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditLayerDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditLayerDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditLayerDataList();
};

