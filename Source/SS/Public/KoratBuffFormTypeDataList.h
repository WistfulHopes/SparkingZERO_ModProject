#pragma once
#include "CoreMinimal.h"
#include "KoratBuffFormTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBuffFormTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBuffFormTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBuffFormTypeDataList) { return 0; }

