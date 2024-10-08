#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAreaEditorUndoActionType.h"
#include "EMapAreaEditType.h"
#include "SSAreaEditorUndoInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSAreaEditorUndoInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapAreaEditType areaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaEditorUndoActionType undoAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 uniqueId;
    
    SS_API FSSAreaEditorUndoInfo();
};

