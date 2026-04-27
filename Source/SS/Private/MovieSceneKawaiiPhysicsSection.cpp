#include "MovieSceneKawaiiPhysicsSection.h"

UMovieSceneKawaiiPhysicsSection::UMovieSceneKawaiiPhysicsSection() {
    this->bSetWind = false;
    this->bSetOverwriteWind = false;
}

void UMovieSceneKawaiiPhysicsSection::ReconstructChannelProxy_Public()
{
	ReconstructChannelProxy();
}


const TArray<FBoolParameterNameAndCurve>& UMovieSceneKawaiiPhysicsSection::GetBoolCurves() const
{
    return BoolParameterNamesAndCurves;
}

const TArray<FScalarParameterNameAndCurve>& UMovieSceneKawaiiPhysicsSection::GetScalarCurves() const
{
    return ScalarParameterNamesAndCurves;
}

const TArray<FVectorParameterNameAndCurves>& UMovieSceneKawaiiPhysicsSection::GetVectorCurves() const
{
    return VectorParameterNamesAndCurves;
}


