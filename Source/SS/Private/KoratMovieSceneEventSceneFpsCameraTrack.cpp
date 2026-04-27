#include "KoratMovieSceneEventSceneFpsCameraTrack.h"
#include "KoratMovieSceneEventSceneFpsCameraTemplate.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.h"

UKoratMovieSceneEventSceneFpsCameraTrack::UKoratMovieSceneEventSceneFpsCameraTrack() {
}

bool UKoratMovieSceneEventSceneFpsCameraTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneEventSceneFpsCameraSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneEventSceneFpsCameraTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneEventSceneFpsCameraSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneEventSceneFpsCameraTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneEventSceneFpsCameraSection* EventSceneFpsCameraSection = Cast<UKoratMovieSceneEventSceneFpsCameraSection>(&InSection))
    {
        return FKoratMovieSceneEventSceneFpsCameraTemplate(*EventSceneFpsCameraSection);
    }
    return FMovieSceneEvalTemplatePtr();
}
#if WITH_EDITOR
FText UKoratMovieSceneEventSceneFpsCameraTrack::GetDisplayName() const
{
    return NSLOCTEXT("KoratEventSceneFpsCamera", "KoratEventSceneFpsCameraTrack", "Korat EventSceneFpsCamera Track");
}
#endif