#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "SpUIGauge.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIGauge : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProgressBarFillType::Type> FillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BarMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BaseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GaugeMaterial;
    
    USpUIGauge();

    UFUNCTION(BlueprintCallable)
    void SetPercent(const float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercent() const;
    
};

