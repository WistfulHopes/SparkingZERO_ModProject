#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionMajor.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionMajor : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionMajor();
};

