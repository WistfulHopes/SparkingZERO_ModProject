#pragma once
#include "CoreMinimal.h"
#include "KoratVelocityLineEffectTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratVelocityLineEffectTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratVelocityLineEffectTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratVelocityLineEffectTypeDataList) { return 0; }

