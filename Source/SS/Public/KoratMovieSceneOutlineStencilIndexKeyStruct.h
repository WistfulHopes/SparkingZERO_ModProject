#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "EKoratCharacterStencil.h"
#include "KoratMovieSceneOutlineStencilIndexKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneOutlineStencilIndexKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterStencil Stencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    SS_API FKoratMovieSceneOutlineStencilIndexKeyStruct();
};

