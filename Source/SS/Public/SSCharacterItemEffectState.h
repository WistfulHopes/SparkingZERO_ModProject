#pragma once
#include "CoreMinimal.h"
#include "SSCharacterItemEffect.h"
#include "SSCharacterItemEffectState.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterItemEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterItemEffect Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppliedResourceChanging;
    
    SS_API FSSCharacterItemEffectState();
};

