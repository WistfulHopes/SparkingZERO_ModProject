#pragma once
#include "CoreMinimal.h"
#include "ModeNSRComSelectData.generated.h"

USTRUCT(BlueprintType)
struct FModeNSRComSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComDp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    SS_API FModeNSRComSelectData();
};

