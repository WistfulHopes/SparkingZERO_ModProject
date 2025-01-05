#pragma once
#include "CoreMinimal.h"
#include "SSItemNotificationData.h"
#include "SSMenuWidget.h"
#include "SSUiItemNotifications.generated.h"

class USSUiItemNotificationElement;

UCLASS(Blueprintable, EditInlineNew)
class USSUiItemNotifications : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSUiItemNotificationElement*> Elements;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSItemNotificationData> NotificationQueue;
    
public:
    USSUiItemNotifications();

};

