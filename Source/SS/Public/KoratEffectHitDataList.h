#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectHitDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectHitDataList();
};

