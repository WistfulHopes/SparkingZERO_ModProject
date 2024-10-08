#pragma once
#include "CoreMinimal.h"
#include "SSTrackingGauge.h"
#include "SSMainGauge.generated.h"

class UCanvasPanel;
class UImage;
class UMaterialInstanceDynamic;
class USSBlastGauge;
class USSBuffIcon;
class USSHPGauge;
class USSHPStockSet;
class USSSPGauge;
class USSSparkingGauge;
class USSSpecialGaugeSet;
class USSStyleIconTimer;
class USSTeamGauge;
class UTextBlock;
class UTexture;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainGauge : public USSTrackingGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BuffIconTextures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FaceChipMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSHPGauge* HPGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSHPStockSet* HPStockSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSpecialGaugeSet* SpecialGaugeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSPGauge* SPGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSparkingGauge* SparkingGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBlastGauge* BlastGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UserNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* GaugeTrackingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* GaugeTrackingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTeamGauge* TeamGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSStyleIconTimer* StyleIconTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSBuffIcon*> SSBuffIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
public:
    USSMainGauge();

    UFUNCTION(BlueprintCallable)
    void StopSparkingMode();
    
    UFUNCTION(BlueprintCallable)
    void StartSparkingMode();
    
    UFUNCTION(BlueprintCallable)
    void StartDamage();
    
    UFUNCTION(BlueprintCallable)
    void SetUserName(const FString& InUserName);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceChipImageTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSparkingModeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSparkingModeFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSparkingDamageStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSparkingDamageFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalDamageStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalDamageFinish();
    
private:
    UFUNCTION(BlueprintCallable)
    void HpGaugeChange(float InPercentage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSTeamGauge* GetTeamGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSPGauge* GetSPGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSparkingGauge* GetSparkingGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSHPStockSet* GetHPStockSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSHPGauge* GetHPGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastGauge* GetBlastGauge();
    
};

