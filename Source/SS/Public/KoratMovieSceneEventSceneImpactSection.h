#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneImpactSection.generated.h"

struct FKoratMovieSceneEventSceneImpactTemplate;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneImpactSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UKoratMovieSceneEventSceneImpactSection();
    
    const FMovieSceneActorReferenceData& GetRebindEvent00Reference() const { return RebindEvent00Reference; }
    const FMovieSceneActorReferenceData& GetRebindEvent01Reference() const { return RebindEvent01Reference; }
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent00Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent01Reference;

};