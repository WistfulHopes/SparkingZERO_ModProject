#include "KoratMovieSceneUIActionBlendOptionTemplate.h"
#include "KoratMovieSceneUIActionBlendOptionSection.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "MovieSceneExecutionToken.h"
#include "IMovieScenePlayer.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequenceID.h"

FKoratMovieSceneUIActionBlendOptionTemplate::FKoratMovieSceneUIActionBlendOptionTemplate()
    : OverrideBlendIn()
    , BlendInBlendTime()
    , BlendInBlendOption()
    , BlendInCustomCurve()
    , OverrideBlendOut()
    , BlendOutBlendTime()
    , BlendOutBlendOption()
    , BlendOutCustomCurve()
    , BlendOutTriggerTime()
    , EnableAutoBlendOut()
{
}

FKoratMovieSceneUIActionBlendOptionTemplate::FKoratMovieSceneUIActionBlendOptionTemplate(const UKoratMovieSceneUIActionBlendOptionSection& Section)
    : OverrideBlendIn(Section.GetOverrideBlendIn())
    , BlendInBlendTime(Section.GetBlendInBlendTime())
    , BlendInBlendOption(Section.GetBlendInBlendOption())
    , BlendInCustomCurve(Section.GetBlendInCustomCurve())
    , OverrideBlendOut(Section.GetOverrideBlendOut())
    , BlendOutBlendTime(Section.GetBlendOutBlendTime())
    , BlendOutBlendOption(Section.GetBlendOutBlendOption())
    , BlendOutCustomCurve(Section.GetBlendOutCustomCurve())
    , BlendOutTriggerTime(Section.GetBlendOutTriggerTime())
    , EnableAutoBlendOut(Section.GetEnableAutoBlendOut())
{
}

void FKoratMovieSceneUIActionBlendOptionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
}