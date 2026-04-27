#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneByteChannel.h"
#include "KoratByteParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratByteParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel ParameterCurve;
};
