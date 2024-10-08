#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSOperationGuideWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSOperationGuideWidget : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* GuideButtonText;
    
public:
    USSOperationGuideWidget();

};

