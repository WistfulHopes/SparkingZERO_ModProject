#pragma once
#include "CoreMinimal.h"
#include "SSRemoteButton.h"
#include "SSRemoteButtonSideChanger.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSRemoteButtonSideChanger : public USSRemoteButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftChipButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightChipButtonWidgetName;
    
public:
    USSRemoteButtonSideChanger();

};

