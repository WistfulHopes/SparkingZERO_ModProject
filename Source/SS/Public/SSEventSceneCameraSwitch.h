#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSEventSceneCameraSwitch.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSEventSceneCameraSwitch : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconSwitcher;
    
public:
    USSEventSceneCameraSwitch();

};

