#include "KoratMovieSceneVisibilityTrack.h"

#include "KoratMovieSceneVisibilitySectionTemplate.h"
#include "Sections/MovieSceneBoolSection.h"

UKoratMovieSceneVisibilityTrack::UKoratMovieSceneVisibilityTrack() {
}

bool UKoratMovieSceneVisibilityTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
	return SectionClass == UMovieSceneBoolSection::StaticClass();
}

FMovieSceneEvalTemplatePtr UKoratMovieSceneVisibilityTrack::CreateTemplateForSection(
	const UMovieSceneSection& InSection) const
{
	return FKoratMovieSceneVisibilitySectionTemplate(*CastChecked<const UMovieSceneBoolSection>(&InSection), *this);
}

class UMovieSceneSection* UKoratMovieSceneVisibilityTrack::CreateNewSection()
{
	return NewObject<UMovieSceneBoolSection>(this, NAME_None, RF_Transactional);
}


