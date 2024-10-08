#pragma once
#include "CoreMinimal.h"
#include "SSCharacterItemSaveState.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterItemSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeDamageLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeScratchLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftDisableEffectTime;
    
    SS_API FSSCharacterItemSaveState();
};

