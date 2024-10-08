#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSGuideTextWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGuideTextWidget : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuideTextWidgetName;
    
public:
    USSGuideTextWidget();

};

