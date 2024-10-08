#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneImpactTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneImpactTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent00Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent01Reference;
    
public:
    SS_API FKoratMovieSceneEventSceneImpactTemplate();
};

