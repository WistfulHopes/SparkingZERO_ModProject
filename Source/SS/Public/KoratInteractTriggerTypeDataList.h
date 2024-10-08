#pragma once
#include "CoreMinimal.h"
#include "KoratInteractTriggerTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratInteractTriggerTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratInteractTriggerTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratInteractTriggerTypeDataList) { return 0; }

