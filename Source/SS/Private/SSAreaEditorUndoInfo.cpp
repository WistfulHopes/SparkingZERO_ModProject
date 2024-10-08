#include "SSAreaEditorUndoInfo.h"

FSSAreaEditorUndoInfo::FSSAreaEditorUndoInfo() {
    this->areaType = EMapAreaEditType::None;
    this->undoAction = EAreaEditorUndoActionType::RemoveArea;
    this->uniqueId = 0;
}

