#pragma once
#include "CoreMinimal.h"
#include "KoratRimLightFrequencyDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratRimLightFrequencyDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratRimLightFrequencyDataList();
};

