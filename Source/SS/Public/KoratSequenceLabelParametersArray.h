#pragma once
#include "CoreMinimal.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequenceLabelParametersArray.generated.h"

USTRUCT(BlueprintType)
struct FKoratSequenceLabelParametersArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> Params;
    
    SS_API FKoratSequenceLabelParametersArray();
};

