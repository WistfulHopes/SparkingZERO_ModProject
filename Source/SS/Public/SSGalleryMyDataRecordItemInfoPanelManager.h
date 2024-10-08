#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMinorItemType.h"
#include "KoratMapDataList.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataRecordItemInfoPanelManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataRecordItemInfoPanelManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGalleryMyDataMinorItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList MapDataList;
    
public:
    USSGalleryMyDataRecordItemInfoPanelManager();

};

