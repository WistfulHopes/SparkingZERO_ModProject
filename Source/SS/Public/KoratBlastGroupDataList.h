#pragma once
#include "CoreMinimal.h"
#include "KoratBlastGroupDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastGroupDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastGroupDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBlastGroupDataList) { return 0; }

