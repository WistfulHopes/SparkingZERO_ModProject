#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSTournamentChartPlayerIcon.generated.h"

class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentChartPlayerIcon : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WinnerSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> CharacterIcons;
    
    USSTournamentChartPlayerIcon();

};

