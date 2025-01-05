#pragma once
#include "CoreMinimal.h"
#include "EBattleWinLose.h"
#include "SSMenuManager.h"
#include "SSBattleResult03Manager.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult03Manager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> BattleResult03MenuButtons;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleWinLose WinLoseNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleWinLose WinLoseNoSplit;
    
    USSBattleResult03Manager();

};

