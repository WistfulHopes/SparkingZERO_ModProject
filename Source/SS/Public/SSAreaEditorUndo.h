#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAreaEditorUndoActionType.h"
#include "SSAreaEditorUndoInfo.h"
#include "SSAreaEditorUndo.generated.h"

class AActor;
class ASSMapWarpDataAssetHolder;

UCLASS(Blueprintable)
class USSAreaEditorUndo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAreaEditorUndoInfo> undoInfoList;
    
    USSAreaEditorUndo();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveUndoInfo(FSSAreaEditorUndoInfo removeInfo);
    
    UFUNCTION(BlueprintCallable)
    FSSAreaEditorUndoInfo execUndo(ASSMapWarpDataAssetHolder* areaHolder, EAreaEditorUndoActionType actionType);
    
    UFUNCTION(BlueprintCallable)
    void EntryAction(EAreaEditorUndoActionType actionType, AActor* InEditGuide);
    
};

