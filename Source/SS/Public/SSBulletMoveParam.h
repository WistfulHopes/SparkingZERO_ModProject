#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSBulletMoveParam.generated.h"

class USSBulletCurveGravity;
class USSBulletCurveHoming;
class USSBulletCurveSpeed;

USTRUCT(BlueprintType)
struct FSSBulletMoveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletCurveSpeed* SpeedCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SpeedRandamScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletCurveHoming* HomingCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HomingRandamScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHomingAvoidDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwichHomingAvoidDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletCurveGravity* GravityCurve;
    
    SS_API FSSBulletMoveParam();
};

