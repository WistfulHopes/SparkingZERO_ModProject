#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "SSMenuManager.h"
#include "SSDramaticEditRuleUi.generated.h"

class USSDramticBattleBattleDataRecord;
class USSMenuButton;
class USSMenuViewScroll;
class USSRemoteButton;
class USSUiWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditRuleUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* TabUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* ListUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> ListButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* CreatingBeforeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapDataList> StageLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RuleCategoryText;
    
public:
    USSDramaticEditRuleUi();

protected:
    UFUNCTION(BlueprintCallable)
    void StageListButtonDataChange(USSRemoteButton* InButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectStageButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectSaveButton();
    
    UFUNCTION(BlueprintCallable)
    void EnterButton();
    
};

