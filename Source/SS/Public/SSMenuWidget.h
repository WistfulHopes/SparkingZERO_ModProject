#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuWidget : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableKeyInput;
    
public:
    USSMenuWidget();

    UFUNCTION(BlueprintCallable)
    void DeactivateWithAllChildWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWithAllChildWidget();
    
};

