#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SSSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    USSSplineComponent(const FObjectInitializer& ObjectInitializer);

};

