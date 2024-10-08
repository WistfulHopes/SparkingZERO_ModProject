#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleMainManager.generated.h"

class USSBattleTrainingBattleCategolyTextManager;
class USSBattleTrainingBattleCommandManager;
class USSBattleTrainingBattleExamSignManager;
class USSBattleTrainingBattleGuideTextManager;
class USSBattleTrainingBattleTipsManager;
class USSBuiltInMenu;
class USSMenuButtonGuideHoldManager;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleMainManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleCategolyTextManager* BattleCategolyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleCommandManager* BattleCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleExamSignManager* BattleExamSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleGuideTextManager* BattleGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleTipsManager* BattleTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* GuideButtonSet;
    
public:
    USSBattleTrainingBattleMainManager();

};

