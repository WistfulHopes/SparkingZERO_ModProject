#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneFpsCameraKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneFpsCameraKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey LookAtReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    SS_API FKoratMovieSceneEventSceneFpsCameraKeyStruct();
};

