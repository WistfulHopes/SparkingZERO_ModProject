#include "KoratMovieSceneUIActionBlendOptionTrack.h"
#include "KoratMovieSceneUIActionBlendOptionTemplate.h"
#include "KoratMovieSceneUIActionBlendOptionSection.h"

UKoratMovieSceneUIActionBlendOptionTrack::UKoratMovieSceneUIActionBlendOptionTrack() {
}

bool UKoratMovieSceneUIActionBlendOptionTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UKoratMovieSceneUIActionBlendOptionSection::StaticClass();
}

UMovieSceneSection* UKoratMovieSceneUIActionBlendOptionTrack::CreateNewSection()
{
    return NewObject<UKoratMovieSceneUIActionBlendOptionSection>(this, NAME_None, RF_Transactional);
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneUIActionBlendOptionTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    if (const UKoratMovieSceneUIActionBlendOptionSection* UIActionBlendOptionSection = Cast<UKoratMovieSceneUIActionBlendOptionSection>(&InSection))
    {
        return FKoratMovieSceneUIActionBlendOptionTemplate(*UIActionBlendOptionSection);
    }
    return FMovieSceneEvalTemplatePtr();
}
#if WITH_EDITOR
FText UKoratMovieSceneUIActionBlendOptionTrack::GetDisplayName() const
{
    return NSLOCTEXT("KoratUIActionBlendOption", "KoratUIActionBlendOptionTrack", "UIAction Blend Option");
}
#endif
