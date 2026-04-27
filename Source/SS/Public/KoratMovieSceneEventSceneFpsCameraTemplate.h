#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneFpsCameraTemplate.generated.h"

class UKoratMovieSceneEventSceneFpsCameraSection;

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneEventSceneFpsCameraTemplate final : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneEventSceneFpsCameraTemplate();
	FKoratMovieSceneEventSceneFpsCameraTemplate(const UKoratMovieSceneEventSceneFpsCameraSection& Section);
	
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;
    
    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData LookAtReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel Enable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Alpha;
    
};
