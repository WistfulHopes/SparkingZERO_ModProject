#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSTeamTalkRollData.generated.h"

USTRUCT(BlueprintType)
struct FSSTeamTalkRollData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> RollCharacters;
    
    SS_API FSSTeamTalkRollData();
};

