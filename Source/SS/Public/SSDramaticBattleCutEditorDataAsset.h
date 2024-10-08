#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorCommonUiType.h"
#include "KoratDRMEditSituationDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorDataAsset.generated.h"

class USSDramaticBattleCutEditorFunctionDataAsset;
class USSDramaticBattleCutEditorFunctionOperationDataAsset;
class USSDramaticBattleCutEditorFunctionParameterDataAsset;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorFunctionDataAsset* CutEditorFunctionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorFunctionOperationDataAsset* CutEditorFunctionOperationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorFunctionParameterDataAsset* CutEditorFunctionParameterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditSituationDataList DefaultSituationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList DefaultSubtitleReplaceWord;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorCommonUiType, TSoftClassPtr<UObject>> CommonUIAssetClasses;
    
public:
    USSDramaticBattleCutEditorDataAsset();

};

