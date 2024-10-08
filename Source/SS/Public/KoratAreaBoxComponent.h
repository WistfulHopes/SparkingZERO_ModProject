#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "KoratAreaInterface.h"
#include "KoratAreaBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratAreaBoxComponent : public UBoxComponent, public IKoratAreaInterface {
    GENERATED_BODY()
public:
    UKoratAreaBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsInside(const FVector& WorldPoint) override PURE_VIRTUAL(IsInside, return false;);
    
};

