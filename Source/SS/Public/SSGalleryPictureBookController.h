#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GalleryPictureBookMenuStruct.h"
#include "SSBattleSetupControllerBase.h"
#include "SSGalleryPictureBookController.generated.h"

class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class ASSGalleryPictureBookController : public ASSBattleSetupControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGalleryPictureBookMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSGalleryPictureBookController(const FObjectInitializer& ObjectInitializer);

};

