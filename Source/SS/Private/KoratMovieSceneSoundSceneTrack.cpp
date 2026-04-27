#include "KoratMovieSceneSoundSceneTrack.h"
#include "KoratMovieSceneSoundTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "KoratMovieSceneSoundSceneSection.h"

#define LOCTEXT_NAMESPACE "KoratMovieSceneSoundScene"

UKoratMovieSceneSoundSceneTrack::UKoratMovieSceneSoundSceneTrack() {
    this->Enum = NULL;
}

bool UKoratMovieSceneSoundSceneTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneSoundSceneSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneSoundSceneTrack::CreateNewSection()
{
    UKoratMovieSceneSoundSceneSection* SoundSection = NewObject<UKoratMovieSceneSoundSceneSection>(this, UKoratMovieSceneSoundSceneSection::StaticClass(), NAME_None, RF_Transactional);

    if (SoundSection)
    {
        // Clear easing
        SoundSection->Easing.EaseIn = nullptr;
        SoundSection->Easing.EaseOut = nullptr;
    }

    return SoundSection;
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneSoundSceneTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneSoundSceneSection* SoundSection = Cast<UKoratMovieSceneSoundSceneSection>(&InSection))
    {
        return FKoratMovieSceneSoundTemplate(*SoundSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UKoratMovieSceneSoundSceneTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UKoratMovieSceneSoundSceneTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UKoratMovieSceneSoundSceneTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UKoratMovieSceneSoundSceneTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UKoratMovieSceneSoundSceneTrack::GetAllSections() const
{
    return Sections;
}

#if WITH_EDITOR
FText UKoratMovieSceneSoundSceneTrack::GetDisplayName() const
{
    return LOCTEXT("KoratMovieSceneSoundSceneTrackName", "Korat Sound Scene");
}
#endif

#undef LOCTEXT_NAMESPACE