#pragma once
#include "CoreMinimal.h"
#include "KoratTutorialCharaHPLimit.generated.h"

USTRUCT(BlueprintType)
struct FKoratTutorialCharaHPLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlliesHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyHp;
    
    SS_API FKoratTutorialCharaHPLimit();
};

