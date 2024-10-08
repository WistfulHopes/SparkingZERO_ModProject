#pragma once
#include "CoreMinimal.h"
#include "KoratVelocityLineEffectDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratVelocityLineEffectDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratVelocityLineEffectDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratVelocityLineEffectDataList) { return 0; }

