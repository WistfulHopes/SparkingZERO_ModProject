#pragma once
#include "CoreMinimal.h"
#include "SSCharacterSearchReduceParameter.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSCharacterSearchReduceParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReduceZSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceZSearchEffectTime;
    
    SS_API FSSCharacterSearchReduceParameter();
};

