#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMissionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMissionDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratMissionDataList) { return 0; }

