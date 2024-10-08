#pragma once
#include "CoreMinimal.h"
#include "KoratAuraAssignDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAuraAssignDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAuraAssignDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratAuraAssignDataList) { return 0; }

