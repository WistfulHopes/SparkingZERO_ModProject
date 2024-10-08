#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GalleryMyDataMenuStruct.h"
#include "SSMenuSceneController.h"
#include "SSGalleryMyDataController.generated.h"

class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSGalleryMyDataController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGalleryMyDataMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSGalleryMyDataController(const FObjectInitializer& ObjectInitializer);

};

