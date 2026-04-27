#pragma once
#include "CoreMinimal.h"
#include "KoratModeHUNDataList.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeHUNDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    SS_API FKoratModeHUNDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratModeHUNDataList) { return 0; }

