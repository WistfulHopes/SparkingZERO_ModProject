#pragma once
#include "CoreMinimal.h"
#include "EKoratSelectGuestCharacterUiMode.h"
#include "SSMenuManager.h"
#include "SSDramaticEditGuestCharaSelectUi.generated.h"

class USSMenuButton;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditGuestCharaSelectUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> CharaButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSelectGuestCharacterUiMode SelectGuestCharaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* DeleteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* ExchangeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> PlayerCharaButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> ComCharaButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HedderText;
    
public:
    USSDramaticEditGuestCharaSelectUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFocusGuestCharapanelExchange(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusCharapanelExchange(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusCharapanelDelete(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideExchangeButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideDeleteButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSideButton(USSMenuButton* InButton);
    
};

