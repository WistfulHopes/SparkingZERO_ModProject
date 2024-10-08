#pragma once
#include "CoreMinimal.h"
#include "OnSSCharaSelectCharaPanelEvnetDelegate.h"
#include "SSMenuButton.h"
#include "SSTestCharaSelectCharaPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTestCharaSelectCharaPanel : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaPanelEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaPanelEvnet OnCharaPanelDecided;
    
    USSTestCharaSelectCharaPanel();

private:
    UFUNCTION(BlueprintCallable)
    void SuperDecided();
    
};

