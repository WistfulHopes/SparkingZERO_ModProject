#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBoneSocketDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectBoneSocketDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectBoneSocketDataList();
};

