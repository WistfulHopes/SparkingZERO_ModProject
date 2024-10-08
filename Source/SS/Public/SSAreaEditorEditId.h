#pragma once
#include "CoreMinimal.h"
#include "EMapAreaEditType.h"
#include "SSAreaEditorEditId.generated.h"

USTRUCT(BlueprintType)
struct FSSAreaEditorEditId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapAreaEditType areaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 uniqueId;
    
    SS_API FSSAreaEditorEditId();
};

