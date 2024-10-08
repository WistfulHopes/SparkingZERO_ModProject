#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleNewCutEditorCommonUiType.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditSituationDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleNewCutEditorDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleNewCutEditorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditSituationDataList DefaultSituationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList DefaultSubtitleReplaceWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList NoneThumbnailPicture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleNewCutEditorCommonUiType, TSoftClassPtr<UObject>> CommonUIAssetClasses;
    
public:
    USSDramaticBattleNewCutEditorDataAsset();

};

