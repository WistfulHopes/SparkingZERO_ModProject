#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticEditCharaSettingUi.generated.h"

class USSDramticBattleBattleDataRecord;
class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditCharaSettingUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> AllieCharaPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> EnemyCharaPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* ComLevelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* DoneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CategoryTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectedDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectedComLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* BeforeEditBattleData;
    
public:
    USSDramaticEditCharaSettingUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SelectDone();
    
    UFUNCTION(BlueprintCallable)
    void SelectComLevel();
    
    UFUNCTION(BlueprintCallable)
    void SelectChara();
    
};

