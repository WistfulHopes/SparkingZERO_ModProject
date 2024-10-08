#pragma once
#include "CoreMinimal.h"
#include "OnChangeCurrentGaugeDelegate.h"
#include "SSGauge.h"
#include "SSHPGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class USSHPDamageEff;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSHPGauge : public USSGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> GaugeTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPPerGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageGaugeReduceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDelaySec;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCurrentGauge OnChangeCurrentGauge;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NextBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CurrentGaugeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* NextBarEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DamageGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OverDamageGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrentGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSHPDamageEff* GaugeBoarderEffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* GaugeTrackingWidget;
    
public:
    USSHPGauge();

    UFUNCTION(BlueprintCallable)
    void SetHPPerGauge(float InHPPerGauge);
    
    UFUNCTION(BlueprintCallable)
    void SetHP(float InHP);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageAmount(float InDamageAmount);
    
    UFUNCTION(BlueprintCallable)
    void ReceivedDamage(float InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimatingDamage();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHPStockNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPPerGauge() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelDamageAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AnimateDamage();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(float InDamageAmount);
    
};

