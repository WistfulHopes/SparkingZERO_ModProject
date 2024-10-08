#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "KoratAreaInterface.h"
#include "KoratAreaManagingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratAreaManagingComponent : public USceneComponent, public IKoratAreaInterface {
    GENERATED_BODY()
public:
    UKoratAreaManagingComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsInside(const FVector& WorldPoint) override PURE_VIRTUAL(IsInside, return false;);
    
};

