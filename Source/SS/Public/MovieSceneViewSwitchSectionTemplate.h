#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneViewSwitchSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneViewSwitchSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowPriority;
    
    SS_API FMovieSceneViewSwitchSectionTemplate();
};

