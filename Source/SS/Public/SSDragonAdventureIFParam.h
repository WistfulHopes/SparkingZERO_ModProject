#pragma once
#include "CoreMinimal.h"
#include "SSMenuCharacterGetRemoveInfo.h"
#include "SSDragonAdventureIFParam.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMenuCharacterGetRemoveInfo> CharacterRemoveInfoArray;
    
    SS_API FSSDragonAdventureIFParam();
};

