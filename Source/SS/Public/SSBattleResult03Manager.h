#pragma once
#include "CoreMinimal.h"
#include "EBattleWinLose.h"
#include "SSMenuManager.h"
#include "SSBattleResult03Manager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult03Manager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleWinLose WinLoseNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleWinLose WinLoseNoSplit;
    
    USSBattleResult03Manager();

};

