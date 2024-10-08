#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditSituationDataList.h"
#include "SSDramaticBattleCutEditorExecuteParameterSelectSituationData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorExecuteParameterSelectSituationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditSituationDataList SituationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList PictureDataList;
    
    SS_API FSSDramaticBattleCutEditorExecuteParameterSelectSituationData();
};

