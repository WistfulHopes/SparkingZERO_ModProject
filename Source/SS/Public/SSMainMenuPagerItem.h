#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuPagerItem.generated.h"

class UUserWidget;
class UWidgetSwitcher;

USTRUCT(BlueprintType)
struct FSSMainMenuPagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
    SS_API FSSMainMenuPagerItem();
};

