#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "KoratIntParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FKoratIntParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel ParameterCurve;
    
    SS_API FKoratIntParameterNameAndCurve();
};

