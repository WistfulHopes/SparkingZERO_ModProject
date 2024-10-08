#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneGuideWidgets.h"
#include "SSEventSceneGuideWidgetsMV.generated.h"

class USSEventSceneCameraSwitch;

USTRUCT(BlueprintType)
struct FSSEventSceneGuideWidgetsMV : public FSSEventSceneGuideWidgets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneCameraSwitch* IconWidget;
    
public:
    SS_API FSSEventSceneGuideWidgetsMV();
};

