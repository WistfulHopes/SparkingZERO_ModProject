#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionDrama.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionDrama : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionDrama();
};

