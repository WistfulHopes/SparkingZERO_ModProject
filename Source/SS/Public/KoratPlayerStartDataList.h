#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPlayerStartDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPlayerStartDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratPlayerStartDataList) { return 0; }

