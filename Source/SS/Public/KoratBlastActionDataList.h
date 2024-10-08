#pragma once
#include "CoreMinimal.h"
#include "KoratBlastActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastActionDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBlastActionDataList) { return 0; }

