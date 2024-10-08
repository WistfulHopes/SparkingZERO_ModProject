#pragma once
#include "CoreMinimal.h"
#include "KoratEffectExpDataList.h"
#include "KoratEffectStaDataList.h"
#include "SSBulletGroupExplosionSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSBulletGroupExplosionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGroupExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectExpDataList GroupExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectStaDataList GroupExplosionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupExplosionConditionCount;
    
    SS_API FSSBulletGroupExplosionSetting();
};

