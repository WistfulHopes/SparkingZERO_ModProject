#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMiddleItemType.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataRecordItemMiddleManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataRecordItemMiddleManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGalleryMyDataMiddleItemType ItemType;
    
public:
    USSGalleryMyDataRecordItemMiddleManager();

};

