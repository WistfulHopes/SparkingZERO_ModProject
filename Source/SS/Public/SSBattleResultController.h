#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSBattleResultController.generated.h"

class ASSBattleResultAdventureIFController;
class ASSPlayerCardControllerActor;
class USSBattleResult01ChLvUpManager;
class USSBattleResult01Manager;
class USSBattleResult01PlayerRankUpManager;
class USSBattleResult01RankUpManager;
class USSBattleResult01TblVicManager;
class USSBattleResult02Manager;
class USSBattleResult03Manager;
class USSBuiltInMenu;
class USSDramaticBattleSummaryUi;
class USSMenuGeneralDialog;
class USSMenuReportDialog;
class USSMenuTextWithChoiceUi;
class USSOperationGuideSet;
class USSResultConfirmationDialog;
class USSShowBattleResultWidget;
class USSTimerUi;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSBattleResultController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult01Manager* BattleResult01Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult01TblVicManager* BattleResult01TblVicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSResultConfirmationDialog* ResultDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult01RankUpManager* BattleResult01RankUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult01PlayerRankUpManager* BattleResult01PlayerRankUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult01ChLvUpManager* BattleResult01ChLvUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult02Manager* BattleResult02Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleResult03Manager* BattleResult03Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSPlayerCardControllerActor* PlayerCardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* AfterBuiltInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* RankMatchResultBuiltInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* PlayerMatchResultBuiltInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSShowBattleResultWidget* ShowBattleResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuTextWithChoiceUi* SummaryTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleSummaryUi* DramaticSummaryEndUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* DramaticSimpleEndWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattleResultAdventureIFController* AdventureIFController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTimerUi* ResultTimerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuReportDialog* ReportDialog;
    
public:
    ASSBattleResultController(const FObjectInitializer& ObjectInitializer);

};

