#pragma once
#include "CoreMinimal.h"
#include "SSCharacterBattleSearchScaleParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterBattleSearchScaleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchScaleOwnInAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchScaleTargetInAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchScaleInSparkingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EasyFindingScaleByTarget;
    
    SS_API FSSCharacterBattleSearchScaleParameter();
};

