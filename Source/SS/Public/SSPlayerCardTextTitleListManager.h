#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardTextTitleListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USSTitleDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardTextTitleListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockItem;
    
public:
    USSPlayerCardTextTitleListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

