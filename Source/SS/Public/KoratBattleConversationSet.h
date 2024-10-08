#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleConversationSetMode.h"
#include "KoratBattleConversation.h"
#include "KoratBattleConversationSet.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleConversationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleConversationSetMode BattleConversationSetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> BattleConversation;
    
    SS_API FKoratBattleConversationSet();
};

