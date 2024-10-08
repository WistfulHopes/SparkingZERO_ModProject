#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMajorItemType.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataRecordItemMajorManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataRecordItemMajorManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGalleryMyDataMajorItemType ItemType;
    
public:
    USSGalleryMyDataRecordItemMajorManager();

};

