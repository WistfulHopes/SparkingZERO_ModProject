#pragma once
#include "CoreMinimal.h"
#include "GalleryTheaterMenuStruct.generated.h"

class USSGalleryTheaterListMenuManager;
class USSGalleryTheaterMenuManager;
class USSMenuManager;

USTRUCT(BlueprintType)
struct FGalleryTheaterMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryTheaterMenuManager* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryTheaterListMenuManager* ListMenu;
    
    SS_API FGalleryTheaterMenuStruct();
};

