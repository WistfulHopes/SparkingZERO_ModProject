#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSEventSceneBanAnnounce.generated.h"

class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSEventSceneBanAnnounce : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
public:
    USSEventSceneBanAnnounce();

};

