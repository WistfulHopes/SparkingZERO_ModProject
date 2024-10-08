#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditEffectDataList.h"
#include "SSEventSceneEffectCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneEffectCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditEffectDataList Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySlowTriggerFlashEffect;
    
    SS_API FSSEventSceneEffectCompileDescriptionDE();
};

