#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneGuideWidgets.generated.h"

class USSMenuManager;
class USSOperationGuideSet;

USTRUCT(BlueprintType)
struct FSSEventSceneGuideWidgets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* SkipWidget;
    
public:
    SS_API FSSEventSceneGuideWidgets();
};

