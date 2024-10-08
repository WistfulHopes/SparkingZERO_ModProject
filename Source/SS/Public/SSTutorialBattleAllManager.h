#pragma once
#include "CoreMinimal.h"
#include "KoratTutorialButtonTextData.h"
#include "SSMenuManager.h"
#include "SSTutorialBattleAllManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTutorialBattleAllManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTutorialBattleAllManager();

    UFUNCTION(BlueprintCallable)
    void SetBattleTipsCheckView(int32 InSetNo, bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTipsCheck(int32 InSetNo, bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTips(int32 InSetNo, FKoratTutorialButtonTextData InButtonText);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCommandBtn(int32 InSetNo, FKoratTutorialButtonTextData InButtonText);
    
};

