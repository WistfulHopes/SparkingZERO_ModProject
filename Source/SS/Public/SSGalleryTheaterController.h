#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GalleryTheaterMenuStruct.h"
#include "SSMenuSceneController.h"
#include "SSGalleryTheaterController.generated.h"

class ASSEndingControllerActor;
class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSGalleryTheaterController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGalleryTheaterMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSEndingControllerActor* EndingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSGalleryTheaterController(const FObjectInitializer& ObjectInitializer);

};

