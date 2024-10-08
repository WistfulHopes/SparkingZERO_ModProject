#include "SSDebugMainGameUIInterface.h"

USSDebugMainGameUIInterface::USSDebugMainGameUIInterface() {
    this->ExecuteInstancePtr = NULL;
    this->bTickable = false;
    this->PlaySide = -1;
}

int32 USSDebugMainGameUIInterface::GetPlaySide() const {
    return 0;
}

APlayerController* USSDebugMainGameUIInterface::GetPlayerController() const {
    return NULL;
}

TSoftObjectPtr<USSDebugMainGameUIExecute> USSDebugMainGameUIInterface::GetExecuteInstancePtr() const {
    return NULL;
}




