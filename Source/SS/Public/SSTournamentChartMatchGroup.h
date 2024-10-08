#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSTournamentChartMatchGroup.generated.h"

class USSTournamentChartPlayerIcon;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentChartMatchGroup : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WinnerSideSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentChartPlayerIcon* LeftSideIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentChartPlayerIcon* RightSideIcon;
    
    USSTournamentChartMatchGroup();

};

