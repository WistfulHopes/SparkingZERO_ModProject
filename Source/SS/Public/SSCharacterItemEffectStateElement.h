#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSCharacterItemEffectState.h"
#include "SSCharacterItemEffectStateElement.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterItemEffectStateElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemDataList ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterItemEffectState> EffectStates;
    
    SS_API FSSCharacterItemEffectStateElement();
};

