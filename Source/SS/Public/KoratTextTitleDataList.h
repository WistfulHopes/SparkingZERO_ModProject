#pragma once
#include "CoreMinimal.h"
#include "KoratTextTitleDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratTextTitleDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratTextTitleDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratTextTitleDataList) { return 0; }

