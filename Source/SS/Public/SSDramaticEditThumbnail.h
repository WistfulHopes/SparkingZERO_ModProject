#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "SSMenuButton.h"
#include "SSDramaticEditThumbnail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditThumbnail : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NullBrush;
    
public:
    USSDramaticEditThumbnail();

protected:
    UFUNCTION(BlueprintCallable)
    void SetBrushSecondImage();
    
    UFUNCTION(BlueprintCallable)
    void PermitCanBrush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideAnima();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSlide();
    
};

