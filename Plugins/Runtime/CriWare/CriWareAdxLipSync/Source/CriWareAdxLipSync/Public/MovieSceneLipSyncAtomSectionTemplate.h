#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneLipSyncAtomSectionTemplate.generated.h"

class UMovieSceneLipSyncAtomSection;

USTRUCT(BlueprintType)
struct CRIWAREADXLIPSYNC_API FMovieSceneLipSyncAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneLipSyncAtomSection* AtomSection;
    
    FMovieSceneLipSyncAtomSectionTemplate();
};

