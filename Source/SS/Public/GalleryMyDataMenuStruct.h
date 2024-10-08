#pragma once
#include "CoreMinimal.h"
#include "GalleryMyDataMenuStruct.generated.h"

class USSGalleryMyDataListMenuManager;
class USSGalleryMyDataMenuManager;
class USSMenuManager;

USTRUCT(BlueprintType)
struct FGalleryMyDataMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryMyDataMenuManager* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGalleryMyDataListMenuManager* ListMenu;
    
    SS_API FGalleryMyDataMenuStruct();
};

