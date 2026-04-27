#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneOutlineStencilIndexTemplate.generated.h"

class UKoratMovieSceneOutlineStencilIndexSection;

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneOutlineStencilIndexTemplate final : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneOutlineStencilIndexTemplate();
	FKoratMovieSceneOutlineStencilIndexTemplate(const UKoratMovieSceneOutlineStencilIndexSection& Section);
	
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
    FMovieSceneByteChannel Stencil;
};
