#pragma once
#include "CoreMinimal.h"
#include "KoratGrassTransformParameter.h"
#include "KoratGrassTransformer.h"
#include "KoratGrassRippleTransformer.generated.h"

class AKoratGrassRipple;

UCLASS(Blueprintable)
class AKoratGrassRippleTransformer : public AKoratGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratGrassRipple* GrassRipple;
    
    AKoratGrassRippleTransformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
    UFUNCTION(BlueprintCallable)
    void MakeOriginalTransformArray(TMap<int32, FKoratGrassTransformParameter>& OutTransformParameters);
    
};

