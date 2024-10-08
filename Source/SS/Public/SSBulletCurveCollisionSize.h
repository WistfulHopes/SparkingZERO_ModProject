#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
#include "SSBulletCurveCollisionSize.generated.h"

UCLASS(Blueprintable)
class USSBulletCurveCollisionSize : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxKeyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    USSBulletCurveCollisionSize();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCollisionSize(float InTime) const;
    
};

