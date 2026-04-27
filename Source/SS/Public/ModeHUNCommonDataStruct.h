#pragma once
#include "CoreMinimal.h"
#include "ModeHUNCommonDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FModeHUNCommonDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> ModeHUNReleaseData;
    
    SS_API FModeHUNCommonDataStruct();
};

