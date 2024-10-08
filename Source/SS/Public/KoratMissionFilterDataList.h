#pragma once
#include "CoreMinimal.h"
#include "KoratMissionFilterDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMissionFilterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMissionFilterDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratMissionFilterDataList) { return 0; }

