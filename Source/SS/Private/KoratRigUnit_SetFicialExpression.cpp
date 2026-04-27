#include "KoratRigUnit_SetFicialExpression.h"
#include "Units/RigUnitContext.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "ControlRig.h"

FKoratRigUnit_SetFicialExpression::FKoratRigUnit_SetFicialExpression()
{
    OpenVertical = 0.0f;
    CloseVertical = 0.0f;
    DefaultVerticalAlpha = 0.0f;

    AnalyzerStatus = 0;
    IsPlaying = false;
    IsMaxOpen = false;

    ControlValue = {};
    EyeCurveValue = {};
    OpenCurveValue = {};
    CloseCurveValue = {};

    FacialInformations = {};
    ExFacialInformations = {};
    CachedControlIndex = {};
}

void FKoratRigUnit_SetFicialExpression::StaticExecute(
    const FRigVMExecuteContext& RigVMExecuteContext,
    const TArrayView<const FKoratFacialInformation>& FacialInformations,
    const TArrayView<const FKoratExFacialInformation>& ExFacialInformations,
    const float OpenVertical,
    const float CloseVertical,
    const float DefaultVerticalAlpha,
    const int32 AnalyzerStatus,
    const bool IsPlaying,
    const bool IsMaxOpen,
    const TArrayView<const float>& ControlValue,
    const TArrayView<const float>& EyeCurveValue,
    const TArrayView<const float>& OpenCurveValue,
    const TArrayView<const float>& CloseCurveValue,
    const TArrayView<const FCachedRigElement>& CachedControlIndex,
    FControlRigExecuteContext& ExecuteContext,
    const FRigUnitContext& Context
)
{
    if (Context.Hierarchy == nullptr)
    {
        return;
    }
}
