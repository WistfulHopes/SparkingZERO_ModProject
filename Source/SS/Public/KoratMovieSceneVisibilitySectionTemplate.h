#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "Sections/MovieSceneBoolSection.h"
#include "KoratMovieSceneVisibilitySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneVisibilitySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneVisibilitySectionTemplate();
    FKoratMovieSceneVisibilitySectionTemplate(const UMovieSceneBoolSection& Section, const UMovieScenePropertyTrack& Track);
    
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;
    
    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }
    
    virtual EMovieSceneCompletionMode GetCompletionMode() const;
        
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolCurve;
};


