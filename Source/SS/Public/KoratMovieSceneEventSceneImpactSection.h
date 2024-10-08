#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneImpactSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneImpactSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent00Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent01Reference;
    
public:
    UKoratMovieSceneEventSceneImpactSection();

};

