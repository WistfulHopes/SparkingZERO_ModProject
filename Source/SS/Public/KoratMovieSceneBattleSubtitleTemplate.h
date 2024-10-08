#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneBattleSubtitleSectionData.h"
#include "KoratMovieSceneBattleSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneBattleSubtitleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneBattleSubtitleSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    SS_API FKoratMovieSceneBattleSubtitleTemplate();
};

