#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "KoratMovieSceneAttachTemplate.generated.h"

class UKoratMovieSceneAttachSection;

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneAttachTemplate final : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneAttachTemplate();
	FKoratMovieSceneAttachTemplate(const UKoratMovieSceneAttachSection& Section);
	
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
    FMovieScenePropertySectionData PropertyData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData PositionReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RotationReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel PositionFirstSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel PositionSecondSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel RotationFirstSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel RotationSecondSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PositionBlendRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RotationBlendRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel PositionFollowing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel RotationFollowing;
    
};

