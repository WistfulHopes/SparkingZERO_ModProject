#pragma once
#include "CoreMinimal.h"
#include "GalleryPictureBookMenuStruct.generated.h"

class USSGalleryPictureBookListMenuManager;
class USSGalleryPictureBookMenuManager;
class USSMenuManager;

USTRUCT(BlueprintType)
struct FGalleryPictureBookMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryPictureBookMenuManager* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryPictureBookListMenuManager* ListMenu;
    
    SS_API FGalleryPictureBookMenuStruct();
};

