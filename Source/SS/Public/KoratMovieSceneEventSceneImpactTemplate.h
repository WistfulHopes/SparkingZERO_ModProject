#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneImpactTemplate.generated.h"

class UKoratMovieSceneEventSceneImpactSection;

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneEventSceneImpactTemplate final : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneEventSceneImpactTemplate();
	FKoratMovieSceneEventSceneImpactTemplate(const UKoratMovieSceneEventSceneImpactSection& Section);
	
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
    FMovieSceneActorReferenceData RebindEvent00Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RebindEvent01Reference;
};
