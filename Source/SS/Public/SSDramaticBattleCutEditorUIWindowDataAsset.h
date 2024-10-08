#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowDialogDataType.h"
#include "ESSDramaticBattleCutEditorUIWindowPreviewUpdateDelayType.h"
#include "ESSDramaticBattleCutEditorUIWindowSelectItemTextConvertType.h"
#include "ESSDramaticBattleCutEditorUIWindowTimeLineUpdateDelayType.h"
#include "ESSDramaticBattleCutEditorUIWindowUiType.h"
#include "KoratDramaticBattleCutEditorFunctionOperationDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowButtonGuideDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorUIWindowDialogData.h"
#include "SSDramaticBattleCutEditorUIWindowSelectParameterBoolText.h"
#include "SSDramaticBattleCutEditorUIWindowSelectParameterBoolTextArray.h"
#include "SSDramaticBattleCutEditorUIWindowDataAsset.generated.h"

class USSDramaticBattleCutEditorUIWindowButtonGuideDataAsset;
class USSDramaticBattleCutEditorUIWindowDisplayConditionDataAsset;
class USSDramaticBattleCutEditorUIWindowSelectItemDataAsset;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorUIWindowSelectItemDataAsset*> SelectItemDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowDisplayConditionDataAsset* DisplayConditionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowButtonGuideDataAsset* ButtonGuideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList RootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleCutEditorUIWindowSelectItemDataList, ESSDramaticBattleCutEditorUIWindowSelectItemTextConvertType> SelectItemTextConvertDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorUIWindowDialogDataType, FSSDramaticBattleCutEditorUIWindowDialogData> DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleCutEditorFunctionOperationDataList, FKoratDramaticBattleCutEditorUIWindowButtonGuideDataList> FunctionOperationButtonGuideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowSelectParameterBoolText> SelectParameterOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterNoneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowSelectParameterBoolText> SelectParameterActionEffectOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowSelectParameterBoolTextArray> SelectParameterSubtitleYesNo;
    
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
    FText LayerNoneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList DefaultListItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorUIWindowPreviewUpdateDelayType, float> PreviewUpdateDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorUIWindowTimeLineUpdateDelayType, float> TimeLineUpdateDelayTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorUIWindowUiType, TSoftClassPtr<UObject>> UIAssetClasses;
    
public:
    USSDramaticBattleCutEditorUIWindowDataAsset();

};

