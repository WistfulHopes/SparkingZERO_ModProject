#pragma once
#include "CoreMinimal.h"
#include "SSMapAreaEditorResourcePoolInfo.generated.h"

class AMapAreaEditGuideBox;

USTRUCT(BlueprintType)
struct FSSMapAreaEditorResourcePoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapAreaEditGuideBox* ActorInst;
    
    SS_API FSSMapAreaEditorResourcePoolInfo();
};

