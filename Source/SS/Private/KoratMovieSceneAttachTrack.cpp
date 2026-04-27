#include "KoratMovieSceneAttachTrack.h"
#include "KoratMovieSceneAttachTemplate.h"
#include "KoratMovieSceneAttachSection.h"

UKoratMovieSceneAttachTrack::UKoratMovieSceneAttachTrack()
{
}

bool UKoratMovieSceneAttachTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneAttachSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneAttachTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneAttachSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneAttachTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneAttachSection* AttachSection = Cast<UKoratMovieSceneAttachSection>(&InSection))
    {
        return FKoratMovieSceneAttachTemplate(*AttachSection);
    }
    return FMovieSceneEvalTemplatePtr();
}