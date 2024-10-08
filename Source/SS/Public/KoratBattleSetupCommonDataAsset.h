#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBattleSetupCommonDataAsset.generated.h"

class UCurveFloat;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratBattleSetupCommonDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharaChangeFadeoutDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> CharaPreviewZoomCameraEndCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamLightSeaquenceDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamLightSeaquenceCharaSelectCameraDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TeamLightSequencerP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TeamLightSequencerP2;
    
    UKoratBattleSetupCommonDataAsset();

};

