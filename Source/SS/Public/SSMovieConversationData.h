#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConversation.h"
#include "SSMovieConversationData.generated.h"

USTRUCT(BlueprintType)
struct FSSMovieConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleConversation Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    SS_API FSSMovieConversationData();
};

