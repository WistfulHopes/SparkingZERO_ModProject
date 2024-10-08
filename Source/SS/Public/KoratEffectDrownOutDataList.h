#pragma once
#include "CoreMinimal.h"
#include "KoratEffectDrownOutDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectDrownOutDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectDrownOutDataList();
};

