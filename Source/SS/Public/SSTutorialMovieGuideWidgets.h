#pragma once
#include "CoreMinimal.h"
#include "SSTutorialMovieGuideWidgets.generated.h"

class USSMenuManager;

USTRUCT(BlueprintType)
struct FSSTutorialMovieGuideWidgets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* SkipWidget;
    
public:
    SS_API FSSTutorialMovieGuideWidgets();
};

