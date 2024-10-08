#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "KoratUIActionBlendOption.generated.h"

USTRUCT(BlueprintType)
struct FKoratUIActionBlendOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendOutTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableAutoBlendOut;
    
    SS_API FKoratUIActionBlendOption();
};

