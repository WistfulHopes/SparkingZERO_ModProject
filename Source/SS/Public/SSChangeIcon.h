#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSChangeIcon.generated.h"

class UImage;
class USpUIGauge;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSChangeIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* FaceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* FaceImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIGauge* SpUIGauge;
    
public:
    USSChangeIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

