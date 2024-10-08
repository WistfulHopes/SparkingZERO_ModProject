#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSceneEditUi.generated.h"

class USSDramaticEditImageSaveData;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSceneEditUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> CutButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> Thumbnails;
    
public:
    USSDramaticSceneEditUi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusLostAnimEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusGetAnimEvent();
    
};

