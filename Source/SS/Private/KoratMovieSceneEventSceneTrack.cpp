#include "KoratMovieSceneEventSceneTrack.h"
#include "KoratMovieSceneEventSceneTemplate.h"
#include "KoratMovieSceneEventSceneSection.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "KoratEventScene"

UKoratMovieSceneEventSceneTrack::UKoratMovieSceneEventSceneTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}

bool UKoratMovieSceneEventSceneTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneEventSceneSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneEventSceneTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneEventSceneSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneEventSceneTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneEventSceneSection* SubtitleSection = Cast<UKoratMovieSceneEventSceneSection>(&InSection))
    {
        return FKoratMovieSceneEventSceneTemplate(*SubtitleSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UKoratMovieSceneEventSceneTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UKoratMovieSceneEventSceneTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UKoratMovieSceneEventSceneTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UKoratMovieSceneEventSceneTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UKoratMovieSceneEventSceneTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UKoratMovieSceneEventSceneTrack::GetDisplayName() const
{
    return LOCTEXT("KoratEventSceneTrackName", "Event Scene");
}
#endif
void UKoratMovieSceneEventSceneTrack::PostCompile(FMovieSceneEvaluationTrack& Track, const FMovieSceneTrackCompilerArgs& Args) const
{
    Track.SetEvaluationMethod(EEvaluationMethod::Swept);
}

#undef LOCTEXT_NAMESPACE