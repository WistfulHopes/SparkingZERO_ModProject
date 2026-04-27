#include "MovieSceneKawaiiPhysicsTrack.h"
#include "MovieSceneKawaiiPhysicsSection.h"
#include "MovieSceneKawaiiPhysicsSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "Kawaii Physics"

UMovieSceneKawaiiPhysicsTrack::UMovieSceneKawaiiPhysicsTrack() {
}

bool UMovieSceneKawaiiPhysicsTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneKawaiiPhysicsSection::StaticClass();
}

UMovieSceneSection* UMovieSceneKawaiiPhysicsTrack::CreateNewSection()
{
    return NewObject<UMovieSceneKawaiiPhysicsSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UMovieSceneKawaiiPhysicsTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UMovieSceneKawaiiPhysicsSection* KawaiiPhysicsSection = Cast<UMovieSceneKawaiiPhysicsSection>(&InSection))
    {
        return FMovieSceneKawaiiPhysicsSectionTemplate(*KawaiiPhysicsSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UMovieSceneKawaiiPhysicsTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UMovieSceneKawaiiPhysicsTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UMovieSceneKawaiiPhysicsTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UMovieSceneKawaiiPhysicsTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UMovieSceneKawaiiPhysicsTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UMovieSceneKawaiiPhysicsTrack::GetDisplayName() const
{
    return LOCTEXT("KawaiiPhysicsTrackName", "Kawaii Physics");
}
#endif

#undef LOCTEXT_NAMESPACE