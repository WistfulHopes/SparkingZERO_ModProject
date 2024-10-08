#pragma once
#include "CoreMinimal.h"
#include "KoratPointLightFrequencyDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPointLightFrequencyDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPointLightFrequencyDataList();
};

