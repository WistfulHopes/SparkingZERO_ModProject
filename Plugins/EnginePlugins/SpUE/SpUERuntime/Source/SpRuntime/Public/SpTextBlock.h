#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/TextWidgetTypes.h"
#include "Components/Widget.h"
#include "SpTextBlock.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class SPRUNTIME_API USpTextBlock : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseColorAndOpacityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateColor> ColorAndOpacityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapWithInvalidationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoWrapText;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimpleTextMode;
    
public:
    USpTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetUseColorAndOpacityIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetStrikeBrush(FSlateBrush InStrikeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(int32 InIndex, float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoTextWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicFontMaterial();
    
};

