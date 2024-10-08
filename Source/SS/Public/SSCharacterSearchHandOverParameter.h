#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchStatus.h"
#include "SSCharacterSearchHandOverParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterSearchHandOverParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleSearchStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepAutoSearchDistanceSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchKeepSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetKeepViewSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReduceZSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceZSearchEffectTime;
    
    SS_API FSSCharacterSearchHandOverParameter();
};

