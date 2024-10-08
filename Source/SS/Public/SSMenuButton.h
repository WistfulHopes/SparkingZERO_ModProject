#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "OnSSMenuButtonDecidedEventDelegate.h"
#include "OnSSMenuButtonDecidedNewEventDelegate.h"
#include "OnSSMenuButtonFocusedEventDelegate.h"
#include "SSMenuWidget.h"
#include "SSMenuButton.generated.h"

class UImage;
class UObject;
class USSRemoteButton;
class UTextLayoutWidget;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButton : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BindImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TextureResourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftTextureResource;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ShortcutKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSRemoteButton* RemoteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisableAnimationEvents;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonDecidedEvent OnDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonDecidedNewEvent OnNewDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonFocusedEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonDecidedNewEvent OnNewFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MouseScrollEventSnatchWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> IgnoreKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDecide;
    
public:
    USSMenuButton();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
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
    
};

