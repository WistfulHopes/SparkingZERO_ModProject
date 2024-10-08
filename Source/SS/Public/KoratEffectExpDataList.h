#pragma once
#include "CoreMinimal.h"
#include "KoratEffectExpDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectExpDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectExpDataList();
};

