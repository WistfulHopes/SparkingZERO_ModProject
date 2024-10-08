#pragma once
#include "CoreMinimal.h"
#include "KoratBulletKeyDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBulletKeyDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBulletKeyDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBulletKeyDataList) { return 0; }

