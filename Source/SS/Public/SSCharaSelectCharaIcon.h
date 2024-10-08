#pragma once
#include "CoreMinimal.h"
#include "OnSSCharaSelectCharaIconEvnetDelegate.h"
#include "SSMenuButton.h"
#include "SSCharaSelectCharaIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSCharaSelectCharaIcon : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelDecided;
    
    USSCharaSelectCharaIcon();

private:
    UFUNCTION(BlueprintCallable)
    void SuperDecided();
    
};

