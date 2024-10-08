#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSDramaticBattleCutEditorExecuteParameterPlayPreview.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSDramaticBattleCutEditorSceneViewController.generated.h"

class ASSCutCameraActor;
class ASSDramaticBattleCutEditorPreviewController;
class ASSEventSceneCapture;
class UKoratMLSDataAsset;
class ULevelSequence;
class USSDramaticBattleCutEditorGuideManager;
class USSUiWidget;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorSceneViewController : public AActor, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TestCameraLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* TestMotionMLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorPreviewController* PreviewController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDramaticBattleCutEditorExecuteParameterPlayPreview PlayPreviewParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* ThumbnailImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* ThumbnailTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSEventSceneCapture* CaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* CaptureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureSlowStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitCaptureComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorGuideManager* GuideManager;
    
public:
    ASSDramaticBattleCutEditorSceneViewController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetCharacterStartList(TArray<FKoratPlayerStartDataList>& InCharacterStartList);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterList(TArray<FKoratCharacterDataList>& InCharacterList);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharacterList(TArray<FKoratCharacterDataList>& OutCharacterList);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void Setup(const FSSDramaticBattleCutEditorUISetupParameter& InParameter) override PURE_VIRTUAL(Setup,);
    
    UFUNCTION()
    void Initialize() override PURE_VIRTUAL(Initialize,);
    
    UFUNCTION()
    ESSDramaticBattleCutEditorUIType GetUIType() override PURE_VIRTUAL(GetUIType, return ESSDramaticBattleCutEditorUIType::None;);
    
    UFUNCTION()
    void Finalize() override PURE_VIRTUAL(Finalize,);
    
};

