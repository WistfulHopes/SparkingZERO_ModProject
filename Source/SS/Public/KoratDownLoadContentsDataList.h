#pragma once
#include "CoreMinimal.h"
#include "KoratDownLoadContentsDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDownLoadContentsDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDownLoadContentsDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDownLoadContentsDataList) { return 0; }

