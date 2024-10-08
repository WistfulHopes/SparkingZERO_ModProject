#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatRandomValue.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratEffectBulletKnockDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletKnockDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractNiagaraTypeDataList NiagaraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatRandomValue ScaleRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundId;
    
    SS_API FKoratEffectBulletKnockDataAssetRecord();
};

