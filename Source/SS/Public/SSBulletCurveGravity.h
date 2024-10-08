#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
#include "SSBulletCurveGravity.generated.h"

UCLASS(Blueprintable)
class USSBulletCurveGravity : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    USSBulletCurveGravity();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityValue(float InTime) const;
    
};

