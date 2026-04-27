#pragma once
#include "CoreMinimal.h"
#include "EKoratModeNSRSelectMode.h"
#include "SSMainMenuWFLConfirmable.h"
#include "SSMainMenuModeNSRContinueConfirm.generated.h"

class UImage;
class UOverlay;
class USSMenuButton;
class USpUIGauge;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuModeNSRContinueConfirm : public USSMainMenuWFLConfirmable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* ButtonLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* ButtonRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> TeamFaceImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOverlay*> TeamFaceOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> TeamFaceDarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpUIGauge*> TeamHpGauges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> PointTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LastFocusedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratModeNSRSelectMode ContinueNSRMode;
    
public:
    USSMainMenuModeNSRContinueConfirm();

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadTexture(TSoftObjectPtr<UTexture2D> InTexture, UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonRight();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(USSMenuButton* InButton);
    
};

