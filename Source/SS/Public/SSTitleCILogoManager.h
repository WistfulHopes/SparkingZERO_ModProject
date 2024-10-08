#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTitleCILogoManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTitleCILogoManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTitleCILogoManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmSoftHouseLogo_03();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmSoftHouseLogo_02();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmSoftHouseLogo_01_2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmSoftHouseLogo_01();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmSoftHouseLogo_00();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmNotice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmBrandLogo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmBlank_03();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmBlank_02();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmBlank_01();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAnmBlank_00();
    
};

