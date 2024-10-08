#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSGalleryMyDataRecordItemUseRatePanelManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryMyDataRecordItemUseRatePanelManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
public:
    USSGalleryMyDataRecordItemUseRatePanelManager();

};

