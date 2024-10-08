#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "MeshHiddenCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMeshHiddenCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UMeshHiddenCommandlet();

};

