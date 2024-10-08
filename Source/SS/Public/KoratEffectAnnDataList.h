#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAnnDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectAnnDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectAnnDataList();
};

