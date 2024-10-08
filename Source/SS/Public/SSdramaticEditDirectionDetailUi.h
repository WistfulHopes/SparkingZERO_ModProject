#pragma once
#include "CoreMinimal.h"
#include "EKoratActionAttackType.h"
#include "EKoratBattleDirectingAction.h"
#include "EKoratBattleDirectingCharacterStateType.h"
#include "EKoratBattleDirectingConditionTargetType.h"
#include "EKoratDramaticDirectingTriggerListItem.h"
#include "EKoratDramaticDirectionrListItem.h"
#include "KoratAiTypeDataList.h"
#include "KoratBGMDataList.h"
#include "KoratBattleDirectingBuffDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSMenuManager.h"
#include "SSdramaticEditDirectionDetailUi.generated.h"

class URichTextBlock;
class USSDramaticBattleDataRecordAsset;
class USSDramaticRightListWindowUi;
class USSDramaticRightWindowEmoteUi;
class USSDramaticRightWindowSceneUi;
class USSDramaticRightWindowUi;
class USSMenuButton;
class USSRemoteButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSdramaticEditDirectionDetailUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightWindowUi* DirectionCharaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightWindowUi* DirectionNumericWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightWindowUi* DirectionFormChangeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightListWindowUi* DirectionConditionsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightListWindowUi* DirectionItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightWindowSceneUi* DirectionSceneWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticRightWindowEmoteUi* DirectionEmoteWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> CharaPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> FormChangePanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> ConditionButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> NumericPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> EditButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> SelectScenePanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> SelectItemPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> UpArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> DownArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UnitText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> HedderTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ExplaneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NumTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* CreatingBeforeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingConditionTargetType> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratDramaticDirectionrListItem> DirectionItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratDramaticDirectingTriggerListItem> DirectingTriggerItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirectingBuffDataList> DirectingBuffItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratAiTypeDataList> DirectingAiItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingCharacterStateType> DirectingStateTypeItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> DirectingZItemItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingCharacterStateType> CharacterStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratActionAttackType> AtackTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingAction> ConditionsActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingAction> ActivateActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBGMDataList> BattleBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectiongConvertionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SetItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* TextListRightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* TextListLeftButton;
    
public:
    USSdramaticEditDirectionDetailUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SelectTrrigerDetailButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectTrrigerButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectSceneText();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemText();
    
    UFUNCTION(BlueprintCallable)
    void SelectInputButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectInput();
    
    UFUNCTION(BlueprintCallable)
    void SelectDirectionDetailButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectDirectionButton();
    
    UFUNCTION(BlueprintCallable)
    void SelectCharaPanel();
    
    UFUNCTION(BlueprintCallable)
    void SelectCharaButton();
    
    UFUNCTION(BlueprintCallable)
    void OnSetTextButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSetItemButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectTimeNum();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectTagetText();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectSceneText();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectItemText();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectConversationText();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectCharacterStateText();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectAtackActionTypeText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncreaseNumeric();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecreaseNumeric();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideTime();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideTextListRightButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideTextListLeftButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideText();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideNumeric();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideFusion();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideCharaPanel();
    
    UFUNCTION(BlueprintCallable)
    void DecideSaveButton();
    
    UFUNCTION(BlueprintCallable)
    void DecideNumeric();
    
    UFUNCTION(BlueprintCallable)
    void DecideFusion();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNumericUp();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNumericDown();
    
};

