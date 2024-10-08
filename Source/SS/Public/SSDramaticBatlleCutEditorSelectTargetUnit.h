#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBatlleCutEditorSelectTargetUnit.generated.h"

class USSDRMEditPictureDataAsset;
class USSDRMEditSituationDataAsset;

USTRUCT(BlueprintType)
struct FSSDramaticBatlleCutEditorSelectTargetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SituationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDRMEditSituationDataAsset* SituationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PictureKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDRMEditPictureDataAsset* PictureDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFilterClipped;
    
    SS_API FSSDramaticBatlleCutEditorSelectTargetUnit();
};

