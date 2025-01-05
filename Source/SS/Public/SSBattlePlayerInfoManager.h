#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattlePlayerInfoManager.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSBattlePlayerInfoManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlayerSideSwitcher;
    
public:
    USSBattlePlayerInfoManager();

};

