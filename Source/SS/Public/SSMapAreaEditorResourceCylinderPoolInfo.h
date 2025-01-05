#pragma once
#include "CoreMinimal.h"
#include "SSMapAreaEditorResourceCylinderPoolInfo.generated.h"

class ASSMapAreaEditGuideCylinder;

USTRUCT(BlueprintType)
struct FSSMapAreaEditorResourceCylinderPoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSMapAreaEditGuideCylinder* ActorInst;
    
    SS_API FSSMapAreaEditorResourceCylinderPoolInfo();
};

