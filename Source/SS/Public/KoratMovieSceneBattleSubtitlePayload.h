#pragma once
#include "CoreMinimal.h"
#include "EKoratMovieSceneBattleSubtitleTargetType.h"
#include "KoratBattleConversation.h"
#include "KoratMovieSceneBattleSubtitlePayload.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneBattleSubtitlePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMovieSceneBattleSubtitleTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattleVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleConversation BattleConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFateBranchType;
    
    FKoratMovieSceneBattleSubtitlePayload();
};

