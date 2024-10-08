#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneEventSceneSectionData.h"
#include "KoratMovieSceneEventSceneTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneEventSceneSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    SS_API FKoratMovieSceneEventSceneTemplate();
};

