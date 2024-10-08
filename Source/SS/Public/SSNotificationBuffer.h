#pragma once
#include "CoreMinimal.h"
#include "SSNotificationData.h"
#include "SSNotificationBuffer.generated.h"

USTRUCT(BlueprintType)
struct FSSNotificationBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSNotificationData> Buffer;
    
    SS_API FSSNotificationBuffer();
};

