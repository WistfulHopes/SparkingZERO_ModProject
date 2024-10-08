#pragma once
#include "CoreMinimal.h"
#include "SSTournamentChartController.h"
#include "SSFreeTournamentChartController.generated.h"

class USSMenuTimerDialog;

UCLASS(Blueprintable)
class SS_API ASSFreeTournamentChartController : public ASSTournamentChartController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuTimerDialog* TimerDialogWidget;
    
public:
    ASSFreeTournamentChartController(const FObjectInitializer& ObjectInitializer);

};

