#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConversation.h"
#include "KoratBattleResultLines.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleResultLines {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> Lines;
    
    SS_API FKoratBattleResultLines();
};

