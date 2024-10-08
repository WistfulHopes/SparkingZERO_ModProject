#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBulletEffectDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBulletEffectDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBulletEffectDataList) { return 0; }

