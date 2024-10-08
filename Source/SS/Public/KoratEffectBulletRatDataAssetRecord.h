#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletDecalDataList.h"
#include "KoratEffectBulletKnockDataList.h"
#include "KoratEffectBulletRatExistLimitParam.h"
#include "KoratEffectBulletRatLineTraceParam.h"
#include "KoratEffectBulletRatDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletDecalDataList BurnMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletKnockDataList LandElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatLineTraceParam LineTraceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatExistLimitParam ExistLimitParam;
    
    SS_API FKoratEffectBulletRatDataAssetRecord();
};

