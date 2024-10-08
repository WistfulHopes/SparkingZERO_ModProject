#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "KoratByteParameterNameAndCurve.h"
#include "KoratIntParameterNameAndCurve.h"
#include "MovieSceneKoratToonPointLightSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKoratToonPointLightSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratByteParameterNameAndCurve> Bytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratIntParameterNameAndCurve> Integers;
    
public:
    SS_API FMovieSceneKoratToonPointLightSectionTemplate();
};

