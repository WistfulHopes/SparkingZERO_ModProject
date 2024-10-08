#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSResultConfirmationDialog.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSResultConfirmationDialog : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecideButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FaceChipShopTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
public:
    USSResultConfirmationDialog();

    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};

