#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/PanelWidget.h"
#include "ESpUIScrollDirection.h"
#include "SpUIScrollBox.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScrollLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusKeepCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BarBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoverAndDraggedThumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThumbBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThumbBrushHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThumbBrushDragged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BarMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EffectMaterial;
    
public:
    USpUIScrollBox();

    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float InNewOffset);
    
    UFUNCTION(BlueprintCallable)
    void ScrollDirectValue(ESpUIScrollDirection InDirection, float InScrollValue);
    
    UFUNCTION(BlueprintCallable)
    void ScrollAmountValue(ESpUIScrollDirection InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOrientationalContentSize();
    
};

