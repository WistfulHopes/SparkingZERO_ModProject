#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowSelectItemTextConvertType.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowUiType.h"
#include "KoratDramaticBattleCutEditorFunctionOperationDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowButtonGuideDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDialogData.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolTextArray.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDataAsset.generated.h"

class USSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAsset;
class USSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAsset;
class USSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAsset;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAsset*> SelectItemDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAsset* DisplayConditionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAsset* ButtonGuideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList RootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleCutEditorUIWindowSelectItemDataList, ESSDramaticBattleCutEditorInitialSelectUIWindowSelectItemTextConvertType> SelectItemTextConvertDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType, FSSDramaticBattleCutEditorInitialSelectUIWindowDialogData> DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleCutEditorFunctionOperationDataList, FKoratDramaticBattleCutEditorUIWindowButtonGuideDataList> FunctionOperationButtonGuideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText> SelectParameterOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterNoneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText> SelectParameterActionEffectOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolTextArray> SelectParameterSubtitleYesNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubtitleBaseTextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubtitleReplaceWordTextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectParameterSlowPositionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectParameterSlowPositionFluctuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectParameterSlowPositionFluctuationHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlowOffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList DefaultListItemTemplate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorInitialSelectUIWindowUiType, TSoftClassPtr<UObject>> UIAssetClasses;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset();

};

