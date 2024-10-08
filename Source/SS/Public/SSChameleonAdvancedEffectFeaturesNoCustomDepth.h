#pragma once
#include "CoreMinimal.h"
#include "ESSChameleonBlendModes.h"
#include "SSChameleonVector2DN.h"
#include "SSChameleonAdvancedEffectFeaturesNoCustomDepth.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSChameleonAdvancedEffectFeaturesNoCustomDepth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSChameleonBlendModes BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlendMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonVector2DN BlendMaskScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendDistanceSharpness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlendDistanceInvert;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectPriority;
    
    SS_API FSSChameleonAdvancedEffectFeaturesNoCustomDepth();
};

