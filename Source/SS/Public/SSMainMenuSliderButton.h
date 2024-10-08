#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSliderButton.generated.h"

class UImage;
class USSMenuButton;
class UWidgetSwitcher;

USTRUCT(BlueprintType)
struct FSSMainMenuSliderButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NameImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* NotifyBadgeSwitcher;
    
    SS_API FSSMainMenuSliderButton();
};

