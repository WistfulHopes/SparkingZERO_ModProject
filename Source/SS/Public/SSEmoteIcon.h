#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSEmoteIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USSEmoteIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* FaceImage;
    
public:
    USSEmoteIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmoteNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmoteDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

