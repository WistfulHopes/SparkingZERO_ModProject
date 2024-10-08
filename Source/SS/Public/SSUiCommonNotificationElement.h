#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSUiCommonNotificationElement.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSUiCommonNotificationElement : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    USSUiCommonNotificationElement();

};

