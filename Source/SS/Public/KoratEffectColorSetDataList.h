#pragma once
#include "CoreMinimal.h"
#include "KoratEffectColorSetDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectColorSetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectColorSetDataList();
};

