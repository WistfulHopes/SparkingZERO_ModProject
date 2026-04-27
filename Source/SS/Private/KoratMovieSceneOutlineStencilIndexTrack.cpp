#include "KoratMovieSceneOutlineStencilIndexTrack.h"
#include "KoratMovieSceneOutlineStencilIndexTemplate.h"
#include "KoratMovieSceneOutlineStencilIndexSection.h"

UKoratMovieSceneOutlineStencilIndexTrack::UKoratMovieSceneOutlineStencilIndexTrack()
{
}

bool UKoratMovieSceneOutlineStencilIndexTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneOutlineStencilIndexSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneOutlineStencilIndexTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneOutlineStencilIndexSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneOutlineStencilIndexTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneOutlineStencilIndexSection* OutlineStencilIndexSection = Cast<UKoratMovieSceneOutlineStencilIndexSection>(&InSection))
    {
        return FKoratMovieSceneOutlineStencilIndexTemplate(*OutlineStencilIndexSection);
    }
    return FMovieSceneEvalTemplatePtr();
}