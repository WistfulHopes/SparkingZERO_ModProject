#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
#include "SSBulletCurveSpeed.generated.h"

UCLASS(Blueprintable)
class USSBulletCurveSpeed : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    USSBulletCurveSpeed();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWayDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedValue(float InTime) const;
    
};

