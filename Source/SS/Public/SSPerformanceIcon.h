#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSPerformanceIcon.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSPerformanceIcon : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* LSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* RSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* GradeSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerVsPlay;
    
public:
    USSPerformanceIcon();

    UFUNCTION(BlueprintCallable)
    void StartHide();
    
    UFUNCTION(BlueprintCallable)
    void FinishShow();
    
    UFUNCTION(BlueprintCallable)
    void FinishHide();
    
};

