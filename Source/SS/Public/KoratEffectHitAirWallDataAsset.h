#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectHitAirWallType.h"
#include "KoratEffectHitAirWallDataAssetRecord.h"
#include "KoratEffectHitAirWallScaleParam.h"
#include "MutualDataAsset.h"
#include "KoratEffectHitAirWallDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectHitAirWallDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectPlayIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectHitAirWallScaleParam DefaultScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratEffectHitAirWallType, FKoratEffectHitAirWallDataAssetRecord> Records;
    
public:
    UKoratEffectHitAirWallDataAsset();

};

