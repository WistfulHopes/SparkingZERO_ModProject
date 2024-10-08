#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEventBaseController.h"
#include "SSDramaticAutomationCaptureController.generated.h"

class ASSEventSceneCapture;
class USSDramaticEditImageSaveData;
class USSMenuWidget;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class ASSDramaticAutomationCaptureController : public ASSDramaticEventBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuWidget* AutomationCaptureWaitingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuWidget* AutomationCaptureUpdateMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSEventSceneCapture* CaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* CaptureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitCaptureStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitCaptureComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> ThumbnailImageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NowEditTempCutThumbnailArray;
    
public:
    ASSDramaticAutomationCaptureController(const FObjectInitializer& ObjectInitializer);

};

