#pragma once
#include "CoreMinimal.h"
#include "KoratBattleSetupTransitionDataRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratBattleSetupTransitionDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequencer;
    
    SS_API FKoratBattleSetupTransitionDataRecord();
};

