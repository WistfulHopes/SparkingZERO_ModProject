#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionReplay.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionReplay : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionReplay();
};

