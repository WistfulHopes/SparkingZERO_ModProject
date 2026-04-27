#include "MovieSceneViewSwitchTrack.h"
#include "MovieSceneViewSwitchSection.h"
#include "MovieSceneViewSwitchSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "Korat View Switch"

UMovieSceneViewSwitchTrack::UMovieSceneViewSwitchTrack() {
}

bool UMovieSceneViewSwitchTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneViewSwitchSection::StaticClass();
}

UMovieSceneSection* UMovieSceneViewSwitchTrack::CreateNewSection()
{
    UMovieSceneViewSwitchSection* ViewSwitchSection = NewObject<UMovieSceneViewSwitchSection>(this, UMovieSceneViewSwitchSection::StaticClass(), NAME_None, RF_Transactional);

    if (ViewSwitchSection)
    {
        // Clear easing
        ViewSwitchSection->Easing.EaseIn = nullptr;
        ViewSwitchSection->Easing.EaseOut = nullptr;
    }

    return ViewSwitchSection;
}

FMovieSceneEvalTemplatePtr UMovieSceneViewSwitchTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UMovieSceneViewSwitchSection* ViewSwitchSection = Cast<UMovieSceneViewSwitchSection>(&InSection))
    {
        return FMovieSceneViewSwitchSectionTemplate(*ViewSwitchSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UMovieSceneViewSwitchTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UMovieSceneViewSwitchTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UMovieSceneViewSwitchTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UMovieSceneViewSwitchTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UMovieSceneViewSwitchTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UMovieSceneViewSwitchTrack::GetDisplayName() const
{
    return LOCTEXT("ViewSwitchTrackName", "Korat View Switch");
}
#endif

#undef LOCTEXT_NAMESPACE