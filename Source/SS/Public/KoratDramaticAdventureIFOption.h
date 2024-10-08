#pragma once
#include "CoreMinimal.h"
#include "KoratBattleResultConversation.h"
#include "KoratDramaticAdventureIFOption.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticAdventureIFOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleResultConversation> ResultEventLines;
    
    SS_API FKoratDramaticAdventureIFOption();
};

