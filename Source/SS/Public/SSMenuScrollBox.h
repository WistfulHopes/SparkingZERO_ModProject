#pragma once
#include "CoreMinimal.h"
#include "EScrollBarOnMouseType.h"
#include "SSMenuWidget.h"
#include "SSScrollBarImageParameter.h"
#include "SSMenuScrollBox.generated.h"

class USSMenuViewScroll;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuScrollBox : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SliderBarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ViewScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> DummyScrollBarWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightDragMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EScrollBarOnMouseType, FSSScrollBarImageParameter> SliderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ScrollAreaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SliderBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* ViewScrollWidget;
    
public:
    USSMenuScrollBox();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateViewScrollWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetTotalLength(float InLength);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayWidth(float InWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPos(float InPosition);
    
};

