#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSExhibitionEndSlateController.generated.h"

class USSMenuManager;

UCLASS(Blueprintable)
class ASSExhibitionEndSlateController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuManager> EndSlateWidgetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSlateDispTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToReleaseCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* EndSlateManager;
    
public:
    ASSExhibitionEndSlateController(const FObjectInitializer& ObjectInitializer);

};

