#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSWaitingIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWaitingIcon : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextTextBlockName;
    
public:
    USSWaitingIcon();

};

