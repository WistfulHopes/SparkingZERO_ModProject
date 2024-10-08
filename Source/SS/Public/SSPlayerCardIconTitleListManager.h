#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardIconTitleListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USSTitleDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardIconTitleListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockItem;
    
public:
    USSPlayerCardIconTitleListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

