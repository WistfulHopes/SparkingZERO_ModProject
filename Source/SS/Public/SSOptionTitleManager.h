#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSOptionTitleManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionTitleManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> OptionTextures;
    
public:
    USSOptionTitleManager();

    UFUNCTION(BlueprintCallable)
    void SetTabControlLock(bool bInIsLock);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_ToOption();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Normal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Brightness();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrightness_Wait();
    
};

