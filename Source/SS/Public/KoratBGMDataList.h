#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBGMDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBGMDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBGMDataList) { return 0; }

