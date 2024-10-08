#pragma once
#include "CoreMinimal.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratEffectBulletKnockDataOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletKnockDataOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractNiagaraTypeDataList LandElevationNiagaraType;
    
    SS_API FKoratEffectBulletKnockDataOverwrite();
};

