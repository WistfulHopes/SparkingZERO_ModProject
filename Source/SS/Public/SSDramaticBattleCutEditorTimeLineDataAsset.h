#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorTimeLineTextType.h"
#include "ESSDramaticBattleCutEditorTimeLineUiType.h"
#include "KoratButtonGuideDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorTimeLineDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorTimeLineDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorTimeLineTextType, FText> SelectParameterTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GridScaleLevels;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorTimeLineUiType, TSoftClassPtr<UObject>> UIAssetClasses;
    
public:
    USSDramaticBattleCutEditorTimeLineDataAsset();

};

