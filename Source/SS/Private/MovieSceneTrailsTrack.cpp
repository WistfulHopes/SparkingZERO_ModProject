#include "MovieSceneTrailsTrack.h"
#include "MovieSceneTrailsSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "MovieSceneTrailsSection.h"

#define LOCTEXT_NAMESPACE "MovieSceneTrails"

UMovieSceneTrailsTrack::UMovieSceneTrailsTrack() {
}

bool UMovieSceneTrailsTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneTrailsSection::StaticClass();
}

UMovieSceneSection* UMovieSceneTrailsTrack::CreateNewSection()
{
    return NewObject<UMovieSceneTrailsSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UMovieSceneTrailsTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UMovieSceneTrailsSection* TrailsSection = Cast<UMovieSceneTrailsSection>(&InSection))
    {
        return FMovieSceneTrailsSectionTemplate(*TrailsSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UMovieSceneTrailsTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UMovieSceneTrailsTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UMovieSceneTrailsTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UMovieSceneTrailsTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UMovieSceneTrailsTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UMovieSceneTrailsTrack::GetDisplayName() const
{
    return LOCTEXT("MovieSceneTrailsTrackName", "Movie Scene Trails");
}
#endif

#undef LOCTEXT_NAMESPACE