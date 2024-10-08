#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMainMenuSlider.generated.h"

class UCanvasPanel;
class UImage;
class USSMainMenuPager;
class USSMainMenuSliderButtons;
class USSMenuButton;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSlider : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* GuideMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* GuideMessagePlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSliderButtons* SliderButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuPager* Pager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* ArrowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* ArrowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DownloadTextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* DownloadTextSwitcher;
    
public:
    USSMainMenuSlider();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowRight();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowLeft();
    
};

