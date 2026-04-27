#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "MovieSceneSection.h"
#include "KoratMovieSceneOutlineStencilIndexSection.generated.h"

struct FKoratMovieSceneOutlineStencilIndexTemplate;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneOutlineStencilIndexSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UKoratMovieSceneOutlineStencilIndexSection();
    
    const FMovieSceneByteChannel& GetStencil() const { return Stencil; }
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel Stencil;
    
};