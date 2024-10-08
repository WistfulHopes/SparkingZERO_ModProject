#pragma once
#include "CoreMinimal.h"
#include "ETournamentVoiceEventId.generated.h"

UENUM(BlueprintType)
enum class ETournamentVoiceEventId : uint8 {
    EntryTop,
    DecidedTournament,
    Round1Versus,
    Round2Versus,
    Round3Versus,
    Round4Versus,
    Victory,
};

