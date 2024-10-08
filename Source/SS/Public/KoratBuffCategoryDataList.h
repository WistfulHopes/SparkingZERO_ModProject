#pragma once
#include "CoreMinimal.h"
#include "KoratBuffCategoryDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBuffCategoryDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBuffCategoryDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBuffCategoryDataList) { return 0; }