#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectBulletRatDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectBulletRatDataList();
};

