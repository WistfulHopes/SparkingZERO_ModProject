#pragma once
#include "CoreMinimal.h"
#include "KoratGrassTransformer.h"
#include "KoratGrassDeformer.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class AKoratGrassDeformer : public AKoratGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DeformCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimer;
    
    AKoratGrassDeformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
};

