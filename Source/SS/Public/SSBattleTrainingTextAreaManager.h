#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingTextAreaManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingTextAreaManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSBattleTrainingTextAreaManager();

};

