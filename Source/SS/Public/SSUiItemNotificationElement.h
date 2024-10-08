#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSUiItemNotificationElement.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSUiItemNotificationElement : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* ItemNumOverlay;
    
    USSUiItemNotificationElement();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadTexture();
    
};

