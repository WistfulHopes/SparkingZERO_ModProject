#pragma once
#include "CoreMinimal.h"
#include "SSOnlineBattleSetupController.h"
#include "SSBattleMode011BattleSetupController.generated.h"

class USSBattleMode010TopMenu;
class USSDramaticBattleWLibHelpDialog;
class USSPropertySettingsWidget;
class USSTournamentRuleEditorWidget;

UCLASS(Blueprintable)
class ASSBattleMode011BattleSetupController : public ASSOnlineBattleSetupController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBattleMode010TopMenu> ClassBattleMode010TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSDramaticBattleWLibHelpDialog> ClassHelpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSPropertySettingsWidget> ClassPropertySettingsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSTournamentRuleEditorWidget> ClassTournamentRuleEditorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BackToTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleMode010TopMenu* BattleMode010TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleWLibHelpDialog* HelpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPropertySettingsWidget* PropertySettingsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentRuleEditorWidget* TournamentRuleEditorWidget;
    
public:
    ASSBattleMode011BattleSetupController(const FObjectInitializer& ObjectInitializer);

};

