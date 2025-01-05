#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSceneEditUi.generated.h"

class USSDramaticCutPanelButton;
class USSDramaticEditImageSaveData;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSceneEditUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticCutPanelButton*> CutButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> Thumbnails;
    
public:
    USSDramaticSceneEditUi();

    UFUNCTION(BlueprintCallable)
    void UpdateSceneCuts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusLostAnimEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusGetAnimEvent();
    
};

