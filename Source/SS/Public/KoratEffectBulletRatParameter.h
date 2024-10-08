#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratEffectBulletRatExistLimitParam.h"
#include "KoratEffectBulletRatLineTraceParam.h"
#include "KoratEffectBulletRatRandomValue.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratEffectBulletRatParameter.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValue DecalScaleRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValue DecalRotationRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecalSoundId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractNiagaraTypeDataList KnockNiagaraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValue KnockScaleRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KnockSoundId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatLineTraceParam LineTraceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatExistLimitParam ExistLimitParam;
    
    SS_API FKoratEffectBulletRatParameter();
};

