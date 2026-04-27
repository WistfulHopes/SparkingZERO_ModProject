#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneFrameMigration.h"
#include "MovieSceneTrailsSection.h"
#include "MovieSceneTrailsSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrailsSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()

public:
    SS_API FMovieSceneTrailsSectionTemplate();
    FMovieSceneTrailsSectionTemplate(const UMovieSceneTrailsSection& Section);

    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }
    
    virtual EMovieSceneCompletionMode GetCompletionMode() const;
    
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
};