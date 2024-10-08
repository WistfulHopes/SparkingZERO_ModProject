#pragma once
#include "CoreMinimal.h"
#include "SSStampData.generated.h"

USTRUCT(BlueprintType)
struct FSSStampData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 boxNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString stampId;
    
    SS_API FSSStampData();
};

