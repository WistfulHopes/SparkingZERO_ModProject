#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneOutlineStencilIndexTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneOutlineStencilIndexTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel Stencil;
    
public:
    SS_API FKoratMovieSceneOutlineStencilIndexTemplate();
};

