#include "KoratMovieSceneLookAtTrack.h"
#include "KoratMovieSceneLookAtTemplate.h"
#include "KoratMovieSceneLookAtSection.h"

UKoratMovieSceneLookAtTrack::UKoratMovieSceneLookAtTrack() {
}

bool UKoratMovieSceneLookAtTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneLookAtSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneLookAtTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneLookAtSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneLookAtTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneLookAtSection* LookAtSection = Cast<UKoratMovieSceneLookAtSection>(&InSection))
    {
        return FKoratMovieSceneLookAtTemplate(*LookAtSection);
    }
    return FMovieSceneEvalTemplatePtr();
}
#if WITH_EDITOR
FText UKoratMovieSceneLookAtTrack::GetDisplayName() const
{
    return NSLOCTEXT("KoratLookAt", "KoratLookAtTrack", "Korat LookAt Track");
}
#endif
