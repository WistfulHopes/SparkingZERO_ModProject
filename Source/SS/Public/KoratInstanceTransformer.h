#pragma once
#include "CoreMinimal.h"
#include "KoratGrassTransformer.h"
#include "KoratInstanceTransformer.generated.h"

UCLASS(Blueprintable)
class AKoratInstanceTransformer : public AKoratGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAlpha;
    
    AKoratInstanceTransformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
};

