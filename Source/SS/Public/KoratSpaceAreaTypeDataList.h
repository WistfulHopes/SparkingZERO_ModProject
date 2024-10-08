#pragma once
#include "CoreMinimal.h"
#include "KoratSpaceAreaTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSpaceAreaTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSpaceAreaTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratSpaceAreaTypeDataList) { return 0; }

