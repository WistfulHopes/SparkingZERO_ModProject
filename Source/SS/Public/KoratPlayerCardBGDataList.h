#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerCardBGDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPlayerCardBGDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPlayerCardBGDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratPlayerCardBGDataList) { return 0; }

