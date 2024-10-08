#pragma once
#include "CoreMinimal.h"
#include "SSAiCharacterDamageParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiCharacterDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    FSSAiCharacterDamageParam();
};

