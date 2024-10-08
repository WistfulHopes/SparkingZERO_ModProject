#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleGuideTextManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleGuideTextManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSBattleTrainingBattleGuideTextManager();

};

