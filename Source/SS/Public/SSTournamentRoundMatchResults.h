#pragma once
#include "CoreMinimal.h"
#include "SSTournamentMatchResult.h"
#include "SSTournamentRoundMatchResults.generated.h"

USTRUCT(BlueprintType)
struct FSSTournamentRoundMatchResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSTournamentMatchResult> RoundMatchResult;
    
    SS_API FSSTournamentRoundMatchResults();
};

