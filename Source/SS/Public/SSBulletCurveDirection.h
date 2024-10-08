#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
#include "SSBulletCurveDirection.generated.h"

UCLASS(Blueprintable)
class USSBulletCurveDirection : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[4];
    
    USSBulletCurveDirection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 GetDirectionRangeScale(float InDirection) const;
    
};

