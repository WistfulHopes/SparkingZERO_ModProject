#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSPowerImpactCameraTypeRecord.h"
#include "SSPowerImpactEffectRecord.h"
#include "SSPowerImpactDataAsset.generated.h"

UCLASS(Blueprintable)
class USSPowerImpactDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactEffectRecord EffectRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime1RandomWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime2RandomWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime3RandomWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSPowerImpactCameraTypeRecord> CameraTypeMap;
    
    USSPowerImpactDataAsset();

};

