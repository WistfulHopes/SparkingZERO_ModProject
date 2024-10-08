#pragma once
#include "CoreMinimal.h"
#include "KoratBuffId.generated.h"

USTRUCT(BlueprintType)
struct FKoratBuffId {
    GENERATED_BODY()
public:
    SS_API FKoratBuffId();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBuffId) { return 0; }

