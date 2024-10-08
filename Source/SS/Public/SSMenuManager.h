#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "EKoratCustomNavigationRule.h"
#include "EKoratWidgetShowHideAnimPattern.h"
#include "SSMenuWidget.h"
#include "SSMenuManager.generated.h"

class USSMenuButton;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuManager : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCustomNavigationRule KoratCustomNavigationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoWrapCustomNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratWidgetShowHideAnimPattern ShowHideAnimPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
public:
    USSMenuManager();

    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnPossible();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* GetGeometryNavigationWidget(EUINavigation InUINavigation, bool bInWrap);
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* GetCustomNavigationWidget(EUINavigation InUINavigation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackDecidedButton(USSMenuButton* InButton);
    
};

