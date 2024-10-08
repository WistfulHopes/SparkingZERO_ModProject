#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceAnimationDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratReplaceAnimationDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratReplaceAnimationDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratReplaceAnimationDataList) { return 0; }

