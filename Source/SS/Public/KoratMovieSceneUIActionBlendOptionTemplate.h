#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneObjectPathChannel.h"
#include "KoratMovieSceneUIActionBlendOptionTemplate.generated.h"

class UKoratMovieSceneUIActionBlendOptionSection;

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneUIActionBlendOptionTemplate final : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneUIActionBlendOptionTemplate();
	FKoratMovieSceneUIActionBlendOptionTemplate(const UKoratMovieSceneUIActionBlendOptionSection& Section);
	
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
    FMovieSceneBoolChannel OverrideBlendIn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendInBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendInBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ObjectType="/Script/Engine.CurveFloat", AllowedClasses="/Script/Engine.CurveFloat"))
    FMovieSceneObjectPathChannel BlendInCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel OverrideBlendOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendOutBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ObjectType="/Script/Engine.CurveFloat", AllowedClasses="/Script/Engine.CurveFloat"))
    FMovieSceneObjectPathChannel BlendOutCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutTriggerTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel EnableAutoBlendOut;
};