#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryPictureBookSkillItemType.h"
#include "SSMenuManager.h"
#include "SSGalleryPictureBookSkillItemPanelManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookSkillItemPanelManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGalleryPictureBookSkillItemType ItemType;
    
public:
    USSGalleryPictureBookSkillItemPanelManager();

};

