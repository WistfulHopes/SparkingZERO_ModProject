#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratBattleKey.h"
#include "ESSAiInputOffType.h"
#include "ESSAiInputType.h"
#include "SSAiInputPad.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SS_API FSSAiInputPad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleKey BattleKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RepeatedInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSAiInputOffType> OffTypes;
    
    FSSAiInputPad();
};

