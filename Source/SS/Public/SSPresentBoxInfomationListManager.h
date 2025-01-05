#pragma once
#include "CoreMinimal.h"
#include "SSPresentBoxListMenuManager.h"
#include "SSPresentBoxInfomationListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USpUIScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class USSPresentBoxInfomationListManager : public USSPresentBoxListMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
public:
    USSPresentBoxInfomationListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

