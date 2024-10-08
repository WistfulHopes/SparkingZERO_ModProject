#include "SSDebugMainGameUIWidget.h"

USSDebugMainGameUIWidget::USSDebugMainGameUIWidget() {
    this->ExecuteInstancePtr = NULL;
    this->bSwitchNewWBP = false;
}

void USSDebugMainGameUIWidget::SetSwitchNewWBP(bool InFlag) {
}

bool USSDebugMainGameUIWidget::IsSwitchNewWBP() const {
    return false;
}

TSoftObjectPtr<USSDebugMainGameUIExecute> USSDebugMainGameUIWidget::GetExecuteInstancePtr() const {
    return NULL;
}


