#pragma once
#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "KoratFoliageInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratFoliageInstancedStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UKoratFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

