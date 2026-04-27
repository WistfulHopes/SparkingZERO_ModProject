#include "MovieSceneKoratToonPointLightTrack.h"
#include "KoratPointLightParameterSection.h"
#include "MovieSceneKoratToonPointLightSectionTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"

#define LOCTEXT_NAMESPACE "Korat Toon Point Light"

UMovieSceneKoratToonPointLightTrack::UMovieSceneKoratToonPointLightTrack() {
}

bool UMovieSceneKoratToonPointLightTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratPointLightParameterSection::StaticClass();
}

UMovieSceneSection* UMovieSceneKoratToonPointLightTrack::CreateNewSection()
{
    UKoratPointLightParameterSection* PointLightSection = NewObject<UKoratPointLightParameterSection>(this, UKoratPointLightParameterSection::StaticClass(), NAME_None, RF_Transactional);

    if (PointLightSection)
    {
        // Clear easing
        PointLightSection->Easing.EaseIn = nullptr;
        PointLightSection->Easing.EaseOut = nullptr;
    }

    return PointLightSection;
}

FMovieSceneEvalTemplatePtr UMovieSceneKoratToonPointLightTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratPointLightParameterSection* PointLightSection = Cast<UKoratPointLightParameterSection>(&InSection))
    {
        return FMovieSceneKoratToonPointLightSectionTemplate(*PointLightSection);
    }

    return FMovieSceneEvalTemplatePtr();
}

void UMovieSceneKoratToonPointLightTrack::AddSection(UMovieSceneSection& Section)
{
    Sections.Add(&Section);
}

void UMovieSceneKoratToonPointLightTrack::RemoveSection(UMovieSceneSection& Section)
{
    Sections.Remove(&Section);
}

bool UMovieSceneKoratToonPointLightTrack::HasSection(const UMovieSceneSection& Section) const
{
    return Sections.Contains(&Section);
}

bool UMovieSceneKoratToonPointLightTrack::IsEmpty() const
{
    return Sections.Num() == 0;
}

const TArray<UMovieSceneSection*>& UMovieSceneKoratToonPointLightTrack::GetAllSections() const
{
    return Sections;
}
#if WITH_EDITOR
FText UMovieSceneKoratToonPointLightTrack::GetDisplayName() const
{
    return LOCTEXT("KoratToonPointLightTrackName", "Korat Toon Point Light");
}
#endif

#undef LOCTEXT_NAMESPACE