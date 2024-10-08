#pragma once
#include "CoreMinimal.h"
#include "SSAiLevelReactionSpeed.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SS_API FSSAiLevelReactionSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinReactionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReactionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LevelCurve;
    
    FSSAiLevelReactionSpeed();
};

