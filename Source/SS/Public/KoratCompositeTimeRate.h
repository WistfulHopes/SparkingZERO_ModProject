#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratCompositeTimeRate.generated.h"

UCLASS(Blueprintable)
class AKoratCompositeTimeRate : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CompositeTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueReset;
    
public:
    AKoratCompositeTimeRate(const FObjectInitializer& ObjectInitializer);

};

