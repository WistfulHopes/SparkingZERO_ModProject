#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardMajorItemType.h"
#include "SSMenuButton.h"
#include "SSPlayerCardItemMajorManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardItemMajorManager : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerCardMajorItemType ItemType;
    
public:
    USSPlayerCardItemMajorManager();

    UFUNCTION(BlueprintCallable)
    void UpdateButton();
    
};

