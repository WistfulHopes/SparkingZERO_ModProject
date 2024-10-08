#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterActionFinishReason.h"
#include "KoratActionDataList.h"
#include "CharacterRequestEndMontageLevelSequence.generated.h"

USTRUCT(BlueprintType)
struct FCharacterRequestEndMontageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterActionFinishReason ActionFinishReason;
    
    SS_API FCharacterRequestEndMontageLevelSequence();
};

