#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletDecalDataOverwrite.h"
#include "KoratEffectBulletKnockDataOverwrite.h"
#include "KoratEffectBulletRatExistLimitParamOverwrite.h"
#include "KoratEffectBulletRatFloatOverwrite.h"
#include "KoratEffectBulletRatLineTraceParamOverwrite.h"
#include "KoratEffectBulletRatRandomValueOverwrite.h"
#include "KoratEffectBulletRatVectorOverwrite.h"
#include "KoratEffectBulletSoundIdOverwrite.h"
#include "KoratEffectBulletRatDataAssetOverrideRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatDataAssetOverrideRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletDecalDataOverwrite BurnMarkOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatVectorOverwrite BurnMarkScaleFactorOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValueOverwrite BurnMarkScaleRandomOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValueOverwrite BurnMarkRotationRandomOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletSoundIdOverwrite BurnMarkSoundIdOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletKnockDataOverwrite LandElevationOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValueOverwrite LandElevationScaleRandomOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletSoundIdOverwrite LandElevationSoundIdOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatLineTraceParamOverwrite LineTraceParamOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatFloatOverwrite SpawnDistanceOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatExistLimitParamOverwrite ExistLimitParamOverwrite;
    
    SS_API FKoratEffectBulletRatDataAssetOverrideRecord();
};

