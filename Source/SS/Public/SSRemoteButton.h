#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSRemoteButton.generated.h"

class UImage;
class UObject;
class UTextLayoutWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSRemoteButton : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BindImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemoteButtonName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TextureResourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftTextureResource;
    
public:
    USSRemoteButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelectToNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDecide();
    
    UFUNCTION(BlueprintCallable)
    void CallEventFromName(FName InFuncName);
    
};

