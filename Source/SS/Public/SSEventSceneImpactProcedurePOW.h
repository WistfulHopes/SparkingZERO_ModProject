#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneImpactProcedure.h"
#include "SSEventSceneImpactProcedurePOW.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class ASSEventSceneImpactProcedurePOW : public ASSEventSceneImpactProcedure {
    GENERATED_BODY()
public:
    ASSEventSceneImpactProcedurePOW(const FObjectInitializer& ObjectInitializer);

};

