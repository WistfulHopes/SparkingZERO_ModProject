#pragma once
#include "CoreMinimal.h"
#include "ESSImageGenerationImageLabel.h"
#include "SSDramaticEventBaseController.h"
#include "SSEventSceneCompileDescriptionDE.h"
#include "SSDramaticImageGenerationController.generated.h"

class ASSEventSceneCapture;
class UObject;
class USSEventSceneDEDataAsset;
class USSEventSceneDataAsset;

UCLASS(Blueprintable)
class ASSDramaticImageGenerationController : public ASSDramaticEventBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSEventSceneCapture* CaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitCaptureComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrepareCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSImageGenerationImageLabel> RequestImageLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSImageGenerationImageLabel CurrentImageLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDEDataAsset* TempEventSceneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDataAsset* PreviewEventSceneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCompileDescriptionDE SceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> EventSceneLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> EventSceneLoadInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadFinishedSceneData;
    
public:
    ASSDramaticImageGenerationController(const FObjectInitializer& ObjectInitializer);

};

