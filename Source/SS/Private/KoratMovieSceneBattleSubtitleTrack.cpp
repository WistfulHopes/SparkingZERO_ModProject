#include "KoratMovieSceneBattleSubtitleTrack.h"
#include "KoratMovieSceneBattleSubtitleTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "KoratMovieSceneBattleSubtitleSection.h"

#define LOCTEXT_NAMESPACE "KoratBattleSubtitle"

UKoratMovieSceneBattleSubtitleTrack::UKoratMovieSceneBattleSubtitleTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}

bool UKoratMovieSceneBattleSubtitleTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneBattleSubtitleSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneBattleSubtitleTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneBattleSubtitleSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneBattleSubtitleTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneBattleSubtitleSection* SubtitleSection = Cast<UKoratMovieSceneBattleSubtitleSection>(&InSection))
    {
        return FKoratMovieSceneBattleSubtitleTemplate(*SubtitleSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UKoratMovieSceneBattleSubtitleTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UKoratMovieSceneBattleSubtitleTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UKoratMovieSceneBattleSubtitleTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UKoratMovieSceneBattleSubtitleTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UKoratMovieSceneBattleSubtitleTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UKoratMovieSceneBattleSubtitleTrack::GetDisplayName() const
{
    return LOCTEXT("KoratBattleSubtitleTrackName", "Korat Battle Subtitle");
}
#endif
void UKoratMovieSceneBattleSubtitleTrack::PostCompile(FMovieSceneEvaluationTrack& Track, const FMovieSceneTrackCompilerArgs& Args) const
{
    Track.SetEvaluationMethod(EEvaluationMethod::Swept);
}

#undef LOCTEXT_NAMESPACE