#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorSceneViewTextType.h"
#include "ESSDramaticBattleCutEditorSceneViewUiType.h"
#include "KoratButtonGuideDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorSceneViewDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorSceneViewDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList PreviewOnlyButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList PreviewButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ThumbnailButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorSceneViewTextType, FText> SelectParameterTexts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorSceneViewUiType, TSoftClassPtr<UObject>> UIAssetClasses;
    
public:
    USSDramaticBattleCutEditorSceneViewDataAsset();

};

