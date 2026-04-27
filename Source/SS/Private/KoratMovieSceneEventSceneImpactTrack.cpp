#include "KoratMovieSceneEventSceneImpactTrack.h"
#include "KoratMovieSceneEventSceneImpactTemplate.h"
#include "KoratMovieSceneEventSceneImpactSection.h"

UKoratMovieSceneEventSceneImpactTrack::UKoratMovieSceneEventSceneImpactTrack()
{
}

bool UKoratMovieSceneEventSceneImpactTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneEventSceneImpactSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneEventSceneImpactTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneEventSceneImpactSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneEventSceneImpactTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneEventSceneImpactSection* EventSceneImpactSection = Cast<UKoratMovieSceneEventSceneImpactSection>(&InSection))
    {
        return FKoratMovieSceneEventSceneImpactTemplate(*EventSceneImpactSection);
    }
    return FMovieSceneEvalTemplatePtr();
}