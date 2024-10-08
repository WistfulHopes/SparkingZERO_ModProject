#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSRankIconWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSRankIconWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
    USSRankIconWidget();

};

