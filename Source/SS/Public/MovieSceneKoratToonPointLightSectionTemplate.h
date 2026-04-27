#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "KoratByteParameterNameAndCurve.h"
#include "KoratIntParameterNameAndCurve.h"
#include "KoratPointLightParameterSection.h"
#include "MovieSceneKoratToonPointLightSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct SS_API FMovieSceneKoratToonPointLightSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratByteParameterNameAndCurve> Bytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratIntParameterNameAndCurve> Integers;
    
public:
    FMovieSceneKoratToonPointLightSectionTemplate();
    FMovieSceneKoratToonPointLightSectionTemplate(const UKoratPointLightParameterSection& Section);

    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }

    virtual EMovieSceneCompletionMode GetCompletionMode() const;
};

