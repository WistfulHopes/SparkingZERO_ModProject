#pragma once
#include "CoreMinimal.h"
#include "SSOnlineBattleSetupController.h"
#include "SSBattleMode010BattleSetupController.generated.h"

class USSBattleMode010DifficultyDialog;
class USSBattleMode010TopMenu;
class USSDramaticBattleWLibHelpDialog;

UCLASS(Blueprintable)
class ASSBattleMode010BattleSetupController : public ASSOnlineBattleSetupController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBattleMode010TopMenu> ClassBattleMode010TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSDramaticBattleWLibHelpDialog> ClassHelpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBattleMode010DifficultyDialog> ClassDifficultyDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BackToTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleMode010TopMenu* BattleMode010TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleWLibHelpDialog* HelpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleMode010DifficultyDialog* DifficultyDialog;
    
public:
    ASSBattleMode010BattleSetupController(const FObjectInitializer& ObjectInitializer);

};

