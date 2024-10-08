#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEventBaseController.h"
#include "SSEventSceneCompileDescriptionDE.h"
#include "SSDramaticBattleCutEditorPreviewController.generated.h"

class ASSCutCameraActor;
class ASSDramaticBattleCutEditorController;
class ASSDramaticBattleCutEditorPreviewController;
class ASSDramaticBattleNewCutEditorController;
class ASSEventSceneScript;
class ASSUiFaderActor;
class ULevelStreamingDynamic;
class UObject;
class USSEventSceneDataAsset;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorPreviewController : public ASSDramaticEventBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEventSceneScript* PreviewScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* PreviewCutCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> PreviewEventSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDataAsset* PreviewEventSceneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorController* CutEditorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleNewCutEditorController* NewCutEditorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCompileDescriptionDE SceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeStartWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeStartWaitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderActor* Fader3DScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> EventSceneLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> EventSceneLoadInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> EventSceneDelayLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> EventSceneDelayLoadInstances;
    
public:
    ASSDramaticBattleCutEditorPreviewController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ASSDramaticBattleCutEditorPreviewController* Create();
    
};

