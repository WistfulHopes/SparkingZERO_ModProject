#include "KoratMovieSceneVisibilityTrack.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "KoratMovieSceneVisibilitySectionTemplate.h"
#include "Sections/MovieSceneBoolSection.h"

#define LOCTEXT_NAMESPACE "Korat Visibility"

UKoratMovieSceneVisibilityTrack::UKoratMovieSceneVisibilityTrack() {
}

bool UKoratMovieSceneVisibilityTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
	return SectionClass == UMovieSceneBoolSection::StaticClass();
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneVisibilityTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FKoratMovieSceneVisibilitySectionTemplate(*CastChecked<const UMovieSceneBoolSection>(&InSection), *this);
}

UMovieSceneSection* UKoratMovieSceneVisibilityTrack::CreateNewSection()
{
    UMovieSceneBoolSection* BoolSection = NewObject<UMovieSceneBoolSection>(this, UMovieSceneBoolSection::StaticClass(), NAME_None, RF_Transactional);

    if (BoolSection)
    {
        // Setup BoolCurve
        FMovieSceneBoolChannel& BoolCurve = BoolSection->GetChannel();
        BoolCurve.Reset();

        // Set default value
        BoolCurve.SetDefault(true);

        // Clear easing
        BoolSection->Easing.EaseIn = nullptr;
        BoolSection->Easing.EaseOut = nullptr;
    }

    return BoolSection;
}


void UKoratMovieSceneVisibilityTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UKoratMovieSceneVisibilityTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UKoratMovieSceneVisibilityTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UKoratMovieSceneVisibilityTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UKoratMovieSceneVisibilityTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UKoratMovieSceneVisibilityTrack::GetDisplayName() const
{
    return LOCTEXT("KoratVisibilityTrackName", "Korat Visibility");
}
#endif

#undef LOCTEXT_NAMESPACE