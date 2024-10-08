#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSOperationGuideSet.generated.h"

class USSMenuButtonGuideHoldManager;
class USSOperationGuideWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSOperationGuideSet : public USSMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideWidget* GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideWidget* GuideButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* ButtonGuideWidget;
    
public:
    USSOperationGuideSet();

};

