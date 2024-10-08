#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"

USSDramaticBattleCutEditorUIWindowItemFunctionBase::USSDramaticBattleCutEditorUIWindowItemFunctionBase() {
    this->FunctionOperation = ESSDramaticBattleCutEditorFunctionOperationType::None;
    this->FunctionParameter = ESSDramaticBattleCutEditorFunctionParameterType::None;
    this->UIController = NULL;
    this->CutEditorController = NULL;
    this->FocusedPreviewDelayTimer = 0.00f;
    this->FocusedTimeLineDelayTimer = 0.00f;
}

bool USSDramaticBattleCutEditorUIWindowItemFunctionBase::IsMatchFunction(ESSDramaticBattleCutEditorFunctionOperationType InFunctionOperation, ESSDramaticBattleCutEditorFunctionParameterType InFunctionParameter) {
    return false;
}

void USSDramaticBattleCutEditorUIWindowItemFunctionBase::Initialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter) {
}

void USSDramaticBattleCutEditorUIWindowItemFunctionBase::Finalize() {
}

USSDramaticBattleCutEditorUIWindowItemFunctionBase* USSDramaticBattleCutEditorUIWindowItemFunctionBase::CreateAndInitializeBase(ASSDramaticBattleCutEditorUIWindowController* InUIController, ASSDramaticBattleCutEditorController* InCutEditorController) {
    return NULL;
}


