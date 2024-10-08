#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSHPStock.generated.h"

class UImage;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSHPStock : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesPerHPLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CurrentStockImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitch;
    
public:
    USSHPStock();

    UFUNCTION(BlueprintCallable)
    void SetTextureIndex(int32 InTextureIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBlank();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakFinish();
    
    UFUNCTION(BlueprintCallable)
    void ChangeOver();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBlank();
    
    UFUNCTION(BlueprintCallable)
    void Break();
    
};

