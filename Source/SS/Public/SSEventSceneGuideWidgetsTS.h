#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneGuideWidgets.h"
#include "SSEventSceneGuideWidgetsTS.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneGuideWidgetsTS : public FSSEventSceneGuideWidgets {
    GENERATED_BODY()
public:
    SS_API FSSEventSceneGuideWidgetsTS();
};

