#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitAirWallBulletScaleFactor.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectHitAirWallBulletScaleFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleFactor;
    
    SS_API FKoratEffectHitAirWallBulletScaleFactor();
};

