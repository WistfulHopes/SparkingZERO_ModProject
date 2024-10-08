#pragma once
#include "CoreMinimal.h"
#include "KoratEffectInteractDecalTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectInteractDecalTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectInteractDecalTypeDataList();
};

