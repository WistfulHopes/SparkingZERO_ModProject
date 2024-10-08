#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSTournamentChartController.generated.h"

class ASSCutCameraActor;
class USSOperationGuideSet;
class USSTournamentChartWidget;
class USSTournamentVersusAnimWidget;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSTournamentChartController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* BackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentChartWidget* ChartWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* EntryAnimWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentVersusAnimWidget* BattleStartAnimWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* BattleResultAnimWidget;
    
public:
    ASSTournamentChartController(const FObjectInitializer& ObjectInitializer);

};

