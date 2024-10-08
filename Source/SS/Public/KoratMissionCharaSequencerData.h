#pragma once
#include "CoreMinimal.h"
#include "KoratMissionCharaSequencerData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratMissionCharaSequencerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> SequencerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    SS_API FKoratMissionCharaSequencerData();
};

