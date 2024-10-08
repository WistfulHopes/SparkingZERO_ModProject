#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardMinorItemType.h"
#include "SSMenuManager.h"
#include "SSPlayerCardItemInfoPanelManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardItemInfoPanelManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerCardMinorItemType ItemType;
    
public:
    USSPlayerCardItemInfoPanelManager();

};

