#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionSaveData : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionSaveData();
};

