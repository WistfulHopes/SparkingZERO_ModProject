#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "ControlTypeParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FControlTypeParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel EnumChannel;
    
    SS_API FControlTypeParameterNameAndCurve();
};

