#pragma once
#include "CoreMinimal.h"
#include "KoratBlastActionCategoryDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastActionCategoryDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastActionCategoryDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBlastActionCategoryDataList) { return 0; }

