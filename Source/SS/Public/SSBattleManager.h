#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSBattleManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subMenu;
    
    USSBattleManager();

};

