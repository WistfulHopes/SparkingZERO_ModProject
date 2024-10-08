#pragma once
#include "CoreMinimal.h"
#include "KoratGroupIdDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratGroupIdDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratGroupIdDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratGroupIdDataList) { return 0; }

