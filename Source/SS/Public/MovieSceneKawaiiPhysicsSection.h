#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneKawaiiPhysicsSection.generated.h"

UCLASS(Blueprintable)
class SS_API UMovieSceneKawaiiPhysicsSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetOverwriteWind;
    
    UMovieSceneKawaiiPhysicsSection();

    // Accessors for the curves if needed
    const TArray<FBoolParameterNameAndCurve>& GetBoolCurves() const;
    const TArray<FScalarParameterNameAndCurve>& GetScalarCurves() const;
    const TArray<FVectorParameterNameAndCurves>& GetVectorCurves() const;
	void ReconstructChannelProxy_Public();
};

