#pragma once
#include "CoreMinimal.h"
#include "KoratIconTitleDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratIconTitleDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratIconTitleDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratIconTitleDataList) { return 0; }

