#include "MovieSceneKoratFreeMaterialTrack.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneKoratParameterSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "Korat FreeMaterial"

UMovieSceneKoratFreeMaterialTrack::UMovieSceneKoratFreeMaterialTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FMovieSceneEvalTemplatePtr UMovieSceneKoratFreeMaterialTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UMovieSceneParameterSection* Section = Cast<UMovieSceneParameterSection>(&InSection))
    {
        return FMovieSceneKoratParameterSectionTemplate(*Section);
    }

    return FMovieSceneEvalTemplatePtr();
}

FText UMovieSceneKoratFreeMaterialTrack::GetDisplayName() const
{
    return LOCTEXT("KoratFreeMaterialTrackName", "Korat FreeMaterial");
}

#undef LOCTEXT_NAMESPACE