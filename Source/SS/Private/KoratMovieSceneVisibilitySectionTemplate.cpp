#include "KoratMovieSceneVisibilitySectionTemplate.h"

#include "Sections/MovieSceneBoolSection.h"
#include "Tracks/MovieScenePropertyTrack.h"

namespace
{
	FName SanitizeBoolPropertyName(FName InPropertyName)
	{
		FString PropertyVarName = InPropertyName.ToString();
		PropertyVarName.RemoveFromStart("b", ESearchCase::CaseSensitive);
		return FName(*PropertyVarName);
	}
}

FKoratMovieSceneVisibilitySectionTemplate::FKoratMovieSceneVisibilitySectionTemplate() {
}

FKoratMovieSceneVisibilitySectionTemplate::FKoratMovieSceneVisibilitySectionTemplate(const UMovieSceneBoolSection& Section, const UMovieScenePropertyTrack& Track)
	: FMovieScenePropertySectionTemplate(Track.GetPropertyName(), Track.GetPropertyPath().ToString())
	, BoolCurve(Section.GetChannel())
{
	PropertyData.PropertyName = SanitizeBoolPropertyName(PropertyData.PropertyName);
}
