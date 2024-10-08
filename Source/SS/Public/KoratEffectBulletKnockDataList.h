#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletKnockDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectBulletKnockDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectBulletKnockDataList();
};

