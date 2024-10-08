#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrkTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectAtbBrkTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectAtbBrkTypeDataList();
};

