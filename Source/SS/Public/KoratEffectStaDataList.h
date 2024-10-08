#pragma once
#include "CoreMinimal.h"
#include "KoratEffectStaDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectStaDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectStaDataList();
};

