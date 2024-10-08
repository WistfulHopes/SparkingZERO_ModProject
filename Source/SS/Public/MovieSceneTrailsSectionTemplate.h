#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneFrameMigration.h"
#include "MovieSceneTrailsSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrailsSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange SectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthScaleScalar;
    
    SS_API FMovieSceneTrailsSectionTemplate();
};

