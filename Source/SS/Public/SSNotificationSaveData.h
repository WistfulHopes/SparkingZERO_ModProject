#pragma once
#include "CoreMinimal.h"
#include "SSNotificationBuffer.h"
#include "SSNotificationSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSNotificationSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSNotificationBuffer NotYetShowns;
    
    FSSNotificationSaveData();
};

