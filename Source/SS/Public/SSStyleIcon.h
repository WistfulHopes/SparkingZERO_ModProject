#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSStyleIcon.generated.h"

class UCanvasPanel;
class UImage;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSStyleIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* FaceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* FaceImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SkillStock_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* SkillStock;
    
public:
    USSStyleIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
    UFUNCTION(BlueprintCallable)
    void Disable(int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Activate(int32 InConsumeBlastStock);
    
};

