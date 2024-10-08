#pragma once
#include "CoreMinimal.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.generated.h"

USTRUCT(BlueprintType)
struct FCriLipsMorphTargetBlendAmountAsJapanese {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float E;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float O;
    
    CRIWAREADXLIPSYNC_API FCriLipsMorphTargetBlendAmountAsJapanese();
};

