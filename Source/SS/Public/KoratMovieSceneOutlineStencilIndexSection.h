#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "MovieSceneSection.h"
#include "KoratMovieSceneOutlineStencilIndexSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneOutlineStencilIndexSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel Stencil;
    
public:
    UKoratMovieSceneOutlineStencilIndexSection();

};

