#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionBattle.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionBattle : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionBattle();
};

