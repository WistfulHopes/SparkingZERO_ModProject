#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneKawaiiPhysicsSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneKawaiiPhysicsSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetOverwriteWind;
    
    UMovieSceneKawaiiPhysicsSection();

};

