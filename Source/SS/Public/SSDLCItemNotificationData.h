#pragma once
#include "CoreMinimal.h"
#include "ESSDlcItemType.h"
#include "SSDLCItemNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FSSDLCItemNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDlcItemType DlcItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataListKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlreadyUnlockedAddMoney;
    
    SS_API FSSDLCItemNotificationData();
};

