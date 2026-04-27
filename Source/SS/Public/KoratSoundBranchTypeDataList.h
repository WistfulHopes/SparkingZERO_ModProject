#pragma once
#include "CoreMinimal.h"
#include "KoratSoundBranchTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSoundBranchTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSoundBranchTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratSoundBranchTypeDataList) { return 0; }

