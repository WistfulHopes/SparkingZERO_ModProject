#include "SSAreaEditorUndo.h"

USSAreaEditorUndo::USSAreaEditorUndo() {
}

void USSAreaEditorUndo::Reset() {
}

void USSAreaEditorUndo::RemoveUndoInfo(FSSAreaEditorUndoInfo removeInfo) {
}

FSSAreaEditorUndoInfo USSAreaEditorUndo::execUndo(ASSMapWarpDataAssetHolder* areaHolder, EAreaEditorUndoActionType actionType) {
    return FSSAreaEditorUndoInfo{};
}

void USSAreaEditorUndo::EntryAction(EAreaEditorUndoActionType actionType, AActor* InEditGuide) {
}


