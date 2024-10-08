#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.h"
#include "SSKoratVersionServer.generated.h"

USTRUCT(BlueprintType)
struct FSSKoratVersionServer : public FSSVersionBase {
    GENERATED_BODY()
public:
    SS_API FSSKoratVersionServer();
};

