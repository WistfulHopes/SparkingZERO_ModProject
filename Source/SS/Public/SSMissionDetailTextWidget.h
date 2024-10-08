#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSMissionDetailTextWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMissionDetailTextWidget : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextTextBlockName;
    
public:
    USSMissionDetailTextWidget();

};

