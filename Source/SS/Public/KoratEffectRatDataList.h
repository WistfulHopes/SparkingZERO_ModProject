#pragma once
#include "CoreMinimal.h"
#include "KoratEffectRatDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectRatDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectRatDataList();
};

