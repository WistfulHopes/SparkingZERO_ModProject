#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuTransitionCharacterData.h"
#include "SSMainMenuTransitionCharacterArray.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuTransitionCharacterArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuTransitionCharacterData> Characters;
    
    SS_API FSSMainMenuTransitionCharacterArray();
};

