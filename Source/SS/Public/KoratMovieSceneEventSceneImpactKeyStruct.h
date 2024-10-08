#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneImpactKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneImpactKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey RebindEvent00Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey RebindEvent01Reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    SS_API FKoratMovieSceneEventSceneImpactKeyStruct();
};

