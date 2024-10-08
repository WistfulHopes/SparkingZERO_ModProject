#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSUiCommonNotifications.generated.h"

class USSUiCommonNotificationElement;

UCLASS(Blueprintable, EditInlineNew)
class USSUiCommonNotifications : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSUiCommonNotificationElement*> Elements;
    
    USSUiCommonNotifications();

};

