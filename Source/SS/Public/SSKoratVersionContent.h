#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionContent.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionContent : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionContent();
};

