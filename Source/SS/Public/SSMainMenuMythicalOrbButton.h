#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMainMenuMythicalOrbButton.generated.h"

class USSMythicalOrbDisplay;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuMythicalOrbButton : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* CompleteImageSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMythicalOrbDisplay* MythicalOrbDisplay;
    
    USSMainMenuMythicalOrbButton();

};

