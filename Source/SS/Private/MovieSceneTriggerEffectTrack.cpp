#include "MovieSceneTriggerEffectTrack.h"
#include "MovieSceneTriggerEffectSection.h"
#include "MovieSceneTriggerEffectSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "Korat Trigger Effect"

UMovieSceneTriggerEffectTrack::UMovieSceneTriggerEffectTrack() {
}

bool UMovieSceneTriggerEffectTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneTriggerEffectSection::StaticClass();
}

UMovieSceneSection* UMovieSceneTriggerEffectTrack::CreateNewSection()
{
    UMovieSceneTriggerEffectSection* TriggerEffectSection = NewObject<UMovieSceneTriggerEffectSection>(this, UMovieSceneTriggerEffectSection::StaticClass(), NAME_None, RF_Transactional);
    
    return TriggerEffectSection;
}

FMovieSceneEvalTemplatePtr UMovieSceneTriggerEffectTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UMovieSceneTriggerEffectSection* TriggerEffectSection = Cast<UMovieSceneTriggerEffectSection>(&InSection))
    {
        return FMovieSceneTriggerEffectSectionTemplate(*TriggerEffectSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UMovieSceneTriggerEffectTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UMovieSceneTriggerEffectTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UMovieSceneTriggerEffectTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UMovieSceneTriggerEffectTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UMovieSceneTriggerEffectTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UMovieSceneTriggerEffectTrack::GetDisplayName() const
{
    return LOCTEXT("TriggerEffectTrackName", "Korat Trigger Effect");
}
#endif

#undef LOCTEXT_NAMESPACE