#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditSituationDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditSituationDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditSituationDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditSituationDataList) { return 0; }

